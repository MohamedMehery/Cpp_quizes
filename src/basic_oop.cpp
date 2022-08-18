
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

class Box
{
    public:
        Box()
        {
            printf("New object\n");
        }
        Box(const Box & b) 
        {
            printf("Copy constructor\n");
        }
        void operator=(const Box & b)
        {
            printf("Assignment operator\n");
        }        
        void Call()
        {
            printf("Call\n");
        }
    private:

};

class Carton : public Box
{
    public:
        Carton() = default;     //Constructor must not be private
};

int main (int argc , char * argv[])
{
    const int & lvalue {10};
    int && rvalue {10};
    //int & lvalue {2};   //error

    Box b1 ;
    Box b2 {b1};    //Copy constructor will be called
    Box b3;     
    b3 = b1;        //Assignment operator will be called
    //Carton * c1 = &b1;    //error can't convert Box* to Carton*
    Carton c1;
    Box * pb = &c1;
    return 0;
}