#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

int main (int argc , char * argv[])
{
    while(argc--) 
        std::cout << argv[argc] <<"\n";
    std::cout<< std::endl;
    return 0;
}