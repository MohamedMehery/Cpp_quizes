#include <iostream>
#include <utility>
#include <cassert>

template <class T>
class UniqueOwner {
private:
    T* ptr;

public:
    // Constructor
    explicit UniqueOwner(T* p = nullptr) : ptr(p) {}

    // Delete copy constructor
    UniqueOwner(const UniqueOwner&) = delete;

    // Delete copy assignment operator
    UniqueOwner& operator=(const UniqueOwner&) = delete;

    // Move constructor
    UniqueOwner(UniqueOwner&& other) noexcept : ptr(other.ptr) {
        other.ptr = nullptr;
    }

    // Move assignment operator
    UniqueOwner& operator=(UniqueOwner&& other) noexcept {
        if (this != &other) {
            delete ptr;
            ptr = other.ptr;
            other.ptr = nullptr;
        }
        return *this;
    }

    // Destructor
    ~UniqueOwner() {
        delete ptr;
    }

    // Access the pointer
    T* get() const {
        return ptr;
    }

    // Dereference operator
    T& operator*() const {
        return *ptr;
    }

    // Arrow operator
    T* operator->() const {
        return ptr;
    }

    T operator[](const int & offset) const
    {
        return *(ptr + offset);
    }
};

int main() {
    UniqueOwner<int> owner(new int[10]);
    owner[2] = 2;
    std::cout << "Value: " << owner[2] << std::endl;

    // This will not compile because copy is not allowed
    // UniqueOwner<int> copy = owner;

    // This will compile because move is allowed
    UniqueOwner<int> moved = std::move(owner);
    std::cout << "Moved Value: " << *moved << std::endl;

    return 0;
}
