#include <iostream>
#include <string>

using namespace std;

int main(int argc, char * argv[])
{
    string str1 = "Mohamed" , str2 = "Mehery";
    auto addstr = [str1 , str2]  {return str1+str2;};
    auto addint = [](auto a, auto b){return a + b;};    //in cpp 14 i can use auto in lambda arg
    cout << addstr() << endl;
    cout << addint(3,2) << endl;
    return 0;
}