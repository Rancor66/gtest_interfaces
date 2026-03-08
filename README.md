Кейс-задача №4 — интерфейсы и юнит-тесты на GoogleTest

В проекте подготовлены:

- интерфейс класса `Queue` с методами `push` и `pop`;
- интерфейс класса `Heap` с методами `push` и `pop`;
- интерфейс класса `BinaryTree` с методами `push`, `pop`, `search`;
- набор тестов на `GoogleTest`, проверяющих наличие требуемых методов и их сигнатур.

Так как по условию нужно реализовать только интерфейс, а сами процедуры реализовывать не требуется, классы сделаны абстрактными (`pure virtual`).
Из-за этого поведенческие тесты оставлены как заготовки с префиксом `DISABLED_`.

Структура проекта

```text
include/
  queue.h
  heap.h
  binary_tree.h
tests/
  interface_tests.cpp
CMakeLists.txt
README.md
```

Сборка

```bash
cmake -S . -B build
cmake --build build
ctest --test-dir build --output-on-failure
```

Что проверяют тесты

1. Что у `Queue` есть методы:
   - `void push(int value)`
   - `int pop()`
2. Что у `Heap` есть методы:
   - `void push(int value)`
   - `int pop()`
3. Что у `BinaryTree` есть методы:
   - `void push(int value)`
   - `int pop()`
   - `bool search(int value) const`
4. Что все три класса являются абстрактными интерфейсами.
