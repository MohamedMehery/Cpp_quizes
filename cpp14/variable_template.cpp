#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

template<typename T>
T pi = static_cast<T>((long double) 22/7);

int main(int argc , char * argv[])
{   
    pi<char> = 'M';
    cout.precision(numeric_limits<long double>::max_digits10);
    cout<<  pi<int> << endl;
    cout<<  pi<float> << endl;
    cout<<  pi<double> << endl;
    cout<<  pi<long double> << endl;
    cout<<  pi<char> << endl;

    return 0;
}