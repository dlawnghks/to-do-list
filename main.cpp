#include <iostream>
#include "TodoItem.h"

int main() {
    TodoItem item("C++ 연습하기");

    std::cout << "할 일: " << item.getTask() << "\n";
    std::cout << "완료 상태: " << (item.isDone() ? "완료" : "미완료") << "\n";

    item.markDone();
    std::cout << "완료 상태 변경 후: " << (item.isDone() ? "완료" : "미완료") << "\n";
    std::cout << "파일 저장용: " << item.toString() << "\n";

    return 0;
}
