#include <iostream>
#include <type_traits>

using namespace std;

template <class T = int>
class Less
{
private:
    /* data */
public:
    Less() = default;
    CMP(T &a , T&b) 
    {
        if( is_integral<T>::value == true )
        {
            return a < b;
        }
    }
    ~Less() = default;
};



int main(void)
{
    int a = 1, b = 2;
    Less<int> L;
    if(L.CMP(a,b)) cout << "a less than b";
}



// #include <iostream>

// using namespace std;

// template <class T = int>
// class Less
// {
//     public:
//     Less() = default;
//     bool operator()(T a , T b)
//     {
//         return a < b;
//     }
// };

// int main()
// {
//     Less<short> l1;     //function object is used like function pointer
//     cout << boolalpha << endl;
//     cout << l1(10,12) << endl;
//     return 0;
// }
