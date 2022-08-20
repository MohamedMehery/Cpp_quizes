#include <iostream>

using namespace std;

[[deprecated("This function this deprecated due to naive implementation")]]
int add(int a, int b){return a + b;}

int main(int argc , char * argv[])
{
    cout << add(3,2) << endl;
    return 0;
}