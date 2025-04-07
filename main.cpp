#include <iostream>
#include "TodoManager.h"

int main() {
    TodoManager manager;

    manager.addTask("C++ �����ϱ�");
    manager.addTask("�� �Ա�");
    manager.addTask("�ｺ�� ����");

    std::cout << "�� �� ���:\n";
    manager.listTasks();

    manager.markTaskDone(1); // �ε��� 1 �� �� ��° �� �� �Ϸ�
    std::cout << "\n2��° �� �� �Ϸ� ó�� ��:\n";
    manager.listTasks();

    manager.deleteTask(0);
    std::cout << "\nù ��° �� �� ���� ��:\n";
    manager.listTasks();

    return 0;
}
