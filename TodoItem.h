#ifndef TODOITEM_H
#define TODOITEM_H

#include <string>

class TodoItem {
private:
    std::string task;
    bool done;

public:
    TodoItem(const std::string& task, bool done = false);

    std::string getTask() const;
    bool isDone() const;

    void markDone();
    std::string toString() const; 
};

