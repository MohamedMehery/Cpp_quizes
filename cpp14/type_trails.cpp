#include <iostream>

using namespace std;

template <typename T>
struct Is_int{
    static bool const value = false;
};

template <>
struct Is_int<int>{
    static bool const value = true;
};

template<int N>
void fill(int* arr)
{
    for(int i = 0 ;i < N ; i++)
    {
        arr[i] = i;
    }
}


template <int N>
void print(int * arr)
{
    for(int i = 0 ;i < N ; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << '\n';
}

template <typename T>
void myfunct(T v)
{
    cout << "Is int " << ( (Is_int<T>::value == true) ? "True" : "False" )<< '\n';
}

int main()
{
    int arr[5] = {0};
    fill<5>(arr);
    print<5>(arr);
    myfunct(5.2);
    return 0;
}