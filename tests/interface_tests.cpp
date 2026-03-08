#include <gtest/gtest.h>

#include <concepts>
#include <type_traits>

#include "binary_tree.h"
#include "heap.h"
#include "queue.h"

namespace {

template <typename T>
concept HasQueueInterface = requires(T object, int value) {
    { object.push(value) } -> std::same_as<void>;
    { object.pop() } -> std::same_as<int>;
};

template <typename T>
concept HasHeapInterface = requires(T object, int value) {
    { object.push(value) } -> std::same_as<void>;
    { object.pop() } -> std::same_as<int>;
};

template <typename T>
concept HasBinaryTreeInterface = requires(const T const_object, T object, int value) {
    { object.push(value) } -> std::same_as<void>;
    { object.pop() } -> std::same_as<int>;
    { const_object.search(value) } -> std::same_as<bool>;
};

} // namespace

TEST(QueueInterfaceTest, HasPushAndPopMethodsWithExpectedSignatures) {
    static_assert(HasQueueInterface<practice::Queue>);
    SUCCEED();
}

TEST(QueueInterfaceTest, IsAbstractBecauseOnlyInterfaceIsRequired) {
    EXPECT_TRUE(std::is_abstract_v<practice::Queue>);
}

TEST(HeapInterfaceTest, HasPushAndPopMethodsWithExpectedSignatures) {
    static_assert(HasHeapInterface<practice::Heap>);
    SUCCEED();
}

TEST(HeapInterfaceTest, IsAbstractBecauseOnlyInterfaceIsRequired) {
    EXPECT_TRUE(std::is_abstract_v<practice::Heap>);
}

TEST(BinaryTreeInterfaceTest, HasPushPopAndSearchMethodsWithExpectedSignatures) {
    static_assert(HasBinaryTreeInterface<practice::BinaryTree>);
    SUCCEED();
}

TEST(BinaryTreeInterfaceTest, IsAbstractBecauseOnlyInterfaceIsRequired) {
    EXPECT_TRUE(std::is_abstract_v<practice::BinaryTree>);
}

#Заготовки поведенческих тестов
TEST(DISABLED_QueueBehaviorTest, PopReturnsElementsInFifoOrder) {}
TEST(DISABLED_HeapBehaviorTest, PopReturnsHighestPriorityElement) {}
TEST(DISABLED_BinaryTreeBehaviorTest, SearchFindsInsertedElement) {}
