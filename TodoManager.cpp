#include "TodoManager.h"
#include <iostream>

void TodoManager::addTask(const std::string& task) {
    todoList.emplace_back(task);
}

void TodoManager::markTaskDone(int index) {
    if (index >= 0 && index < todoList.size()) {
        todoList[index].markDone();
    }
}

void TodoManager::deleteTask(int index) {
    if (index >= 0 && index < todoList.size()) {
        todoList.erase(todoList.begin() + index);
    }
}

void TodoManager::listTasks() const {
    for (size_t i = 0; i < todoList.size(); ++i) {
        std::cout << i + 1 << ". [" << (todoList[i].isDone() ? "x" : " ") << "] "
            << todoList[i].getTask() << "\n";
    }
}

std::vector<TodoItem>& TodoManager::getTasks() {
    return todoList;
}
