#include "TodoItem.h"

TodoItem::TodoItem(const std::string& task, bool done)
    : task(task), done(done) {
}

std::string TodoItem::getTask() const {
    return task;
}

bool TodoItem::isDone() const {
    return done;
}

void TodoItem::markDone() {
    done = true;
}

std::string TodoItem::toString() const {
    return (done ? "1" : "0") + std::string("|") + task;
}
