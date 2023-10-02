/* 
* @brief this cpp file is a solution to a hackerrank code challenge named class template specialization
*/

#include <iostream>
using namespace std;

enum class Fruit {apple = 1, orange, pear};
enum class Color {red = 1, orange, green};

template <typename T> struct Trails;

template <>
struct Trails<Fruit>
{
    static string name(int indx)
    {
        switch(static_cast<Fruit>(indx) )
        {
            case Fruit::apple:
                return "apple";
            case Fruit::orange:
                return "orange";
            case Fruit::pear:
                return "pear"; 
            default:   
                return "Unknown";                       
        }
    }
};

template<>
struct Trails<Color>
{
    static string name(int indx)
    {
        switch(static_cast<Color>(indx) )
        {
            case Color::red:
                return "red";   
            case Color::orange:
                return "orange";
            case Color::green:
                return "green";
            default:
                return "Unkown";
        }
    }
};

int main(int argc, char * argv[])
{
    cout << Trails<Color>::name(1);

    return 0;
}