#include <iostream>

using namespace std;

// auto is not enough to auto deduce the return type but decltype(auto) will 
// decltype is used when return type is const or reference

//  const int x = 0
//  auto x1 = x; // will be int
//  decltype(auto)  x2 = x ; //will be const int
//  int y = 0;
//  int & y1 = y; 
//  auto y2 = y1;   //int
//  decltype(auto) y3 = y1; //int &
//  int && z = 0;
//  auto z1 = std::move(z); //  int
//  decltype(auto) z2 = std::move(z) ; // int&&

decltype(auto) inc(int & x ){x++ ; return x;}

int main(int argc , char * argv[])
{
    int x = 5, y = 3;
    int & z = inc(x);
    cout << z << endl;
    return 0;
}