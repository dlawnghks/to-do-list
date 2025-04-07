#include <iostream>
#include "TodoManager.h"

int main() {
    TodoManager manager;

    manager.addTask("C++ 공부하기");
    manager.addTask("밥 먹기");
    manager.addTask("헬스장 가기");

    std::cout << "할 일 목록:\n";
    manager.listTasks();

    manager.markTaskDone(1); // 인덱스 1 → 두 번째 할 일 완료
    std::cout << "\n2번째 할 일 완료 처리 후:\n";
    manager.listTasks();

    manager.deleteTask(0);
    std::cout << "\n첫 번째 할 일 삭제 후:\n";
    manager.listTasks();

    return 0;
}
