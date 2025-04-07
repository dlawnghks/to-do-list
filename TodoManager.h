#ifndef TODOMANAGER_H
#define TODOMANAGER_H

#include <vector>
#include "TodoItem.h"

class TodoManager {
private:
    std::vector<TodoItem> todoList;

public:
    void addTask(const std::string& task);
    void markTaskDone(int index);
    void deleteTask(int index);
    void listTasks() const;
    std::vector<TodoItem>& getTasks(); // ���� ��������� �ʿ�
};

#endif // TODOMANAGER_H
