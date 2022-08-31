#include <iostream>
#include <functional>

using namespace std;
bool _less(int a , int b){
    return a < b;
}

int main()
{
    std::function<bool(int , int)> compare;
    compare = _less;
    cout<< boolalpha ;
    if(compare)     //check if compare != nullptr
    {
        cout << compare(10 , 12) << endl;
    }
    return 0;
}