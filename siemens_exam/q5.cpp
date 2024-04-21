#include <iostream>
#include <vector>

using namespace std;

void increment (const int& i) {
    ++const_cast<int&>(i);
}


int main() 
{
    int i1 = 1; 
    const int i2 = 1;
    increment (i1);
    increment (12);
    cout << i1 << ' ' << i2 << endl;
    return 0;
}
