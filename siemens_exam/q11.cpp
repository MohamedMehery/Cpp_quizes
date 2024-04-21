#include <iostream>

using namespace std;

void func(const double){cout << "overload1" << endl;}
// Overload 1
void func (double &&){cout << "overload2" << endl;}
// Overload 2
template <typename T> void func(const T&){cout << "overload3" << endl;}
// Overload 3
template <typename T> void func(T&&){cout << "overload4" << endl;}
// Overload 4

int main() {
    func(42);   
    return 0;
}