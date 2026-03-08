#pragma once

#include <cstddef>

namespace practice {

class Queue {
public:
    virtual ~Queue() = default;

    virtual void push(int value) = 0;
    virtual int pop() = 0;
};

} // namespace practice
