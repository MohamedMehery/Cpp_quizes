
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main (int argc , char * argv[])
{
    const int & lvalue {10};
    int && rvalue {10};
    int & lvalue {2};   //error
    return 0;
}