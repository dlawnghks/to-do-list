#include <iostream>
#include "TodoItem.h"

int main() {
    TodoItem item("C++ �����ϱ�");

    std::cout << "�� ��: " << item.getTask() << "\n";
    std::cout << "�Ϸ� ����: " << (item.isDone() ? "�Ϸ�" : "�̿Ϸ�") << "\n";

    item.markDone();
    std::cout << "�Ϸ� ���� ���� ��: " << (item.isDone() ? "�Ϸ�" : "�̿Ϸ�") << "\n";
    std::cout << "���� �����: " << item.toString() << "\n";

    return 0;
}
