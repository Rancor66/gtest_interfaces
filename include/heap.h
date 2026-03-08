#pragma once

#include <cstddef>

namespace practice {

class Heap {
public:
    virtual ~Heap() = default;

    virtual void push(int value) = 0;
    virtual int pop() = 0;
};

} // namespace practice
