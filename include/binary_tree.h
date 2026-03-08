#pragma once

#include <cstddef>

namespace practice {

class BinaryTree {
public:
    virtual ~BinaryTree() = default;

    virtual void push(int value) = 0;
    virtual int pop() = 0;
    virtual bool search(int value) const = 0;
};

} // namespace practice
