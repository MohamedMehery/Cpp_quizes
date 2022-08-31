#include <iostream>
#include <map>
#include <optional>

using namespace std;

// g++ -std=c++17 .\optional.cpp
optional<bool> ifchar(const char & c)
{
    optional<bool> result;
    if( ((c <= 'Z') && (c>='A')) || ( (c <= 'z') && (c>='a') ))
    {
        result = true;
    }
    return result;
}

int main(int argc , char * argv[])
{
    auto result = ifchar('!');
    cout << "output is " << result.value_or(0) << endl;
    return 0;
}