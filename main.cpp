#include <iostream>
#include <limits>
#include "TodoManager.h"

int main() {
    TodoManager manager;
    int choice;

    while (true) {
        std::cout << "\n=== To-Do List Menu ===\n";
        std::cout << "1. 할 일 추가\n";
        std::cout << "2. 할 일 목록 보기\n";
        std::cout << "3. 할 일 완료 처리\n";
        std::cout << "4. 할 일 삭제\n";
        std::cout << "0. 종료\n";
        std::cout << "메뉴 선택: ";
        std::cin >> choice;

        // 입력 오류 방지
        if (std::cin.fail()) {
            std::cin.clear(); // 오류 플래그 클리어
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // 잘못된 입력 무시
            std::cout << "잘못된 입력입니다. 숫자를 입력해주세요.\n";
            continue;
        }

        if (choice == 0) {
            std::cout << "프로그램을 종료합니다.\n";
            break;
        }

        switch (choice) {
        case 1: {
            std::cin.ignore(); // 줄바꿈 제거
            std::string task;
            std::cout << "추가할 할 일 입력: ";
            std::getline(std::cin, task);
            manager.addTask(task);
            std::cout << "✅ 추가 완료!\n";
            break;
        }
        case 2: {
            std::cout << "\n📋 현재 할 일 목록:\n";
            manager.listTasks();
            break;
        }
        case 3: {
            int index;
            std::cout << "완료 처리할 번호 입력: ";
            std::cin >> index;
            manager.markTaskDone(index - 1);
            std::cout << "✅ 완료 처리되었습니다.\n";
            break;
        }
        case 4: {
            int index;
            std::cout << "삭제할 번호 입력: ";
            std::cin >> index;
            manager.deleteTask(index - 1);
            std::cout << "🗑️ 삭제 완료!\n";
            break;
        }
        default:
            std::cout << "❌ 없는 메뉴입니다. 다시 선택해주세요.\n";
        }
    }

    return 0;
}
