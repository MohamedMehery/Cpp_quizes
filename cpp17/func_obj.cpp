#include <iostream>

using namespace std;

template <class T = int>
class Less
{
    public:
    Less() = default;
    bool operator()(T a , T b)
    {
        return a < b;
    }
};

int main()
{
    Less<short> l1;     //function object is used like function pointer
    cout << boolalpha;
    cout << l1(10,12) << endl;
    return 0;
}