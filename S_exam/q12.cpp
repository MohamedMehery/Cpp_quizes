// What is the problem with this code snippet?
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() {std::cout << "Hello";}
};
class Derived: public Base {
public:
    Derived (const std::string& m): message(m) {}
    void show() override {std::cout << message;}
private:
    std::string message;
};
struct S {
    ~S() { std::cout << "~S()" << std::endl; }
};
int main() {
    Base *b = new Derived("Best of luck in this test\n"); 
    b->show();
    delete b;

    int a =4;
    const int &ref = a;
    S* s = new S[2];
    delete []s; // Corrected to delete[]
}