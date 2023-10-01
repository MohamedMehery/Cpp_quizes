
#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

using namespace std;

typedef enum Dev_Error_t {NO_ERROR = 0 , GLOBAL_ERROR = 0xA0, LOCAL_ERROR = 0xB0};

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
    Dev_Error_t main_error = GLOBAL_ERROR;
    cout << main_error << endl;
    const int & lvalue {10};
    int && rvalue {10};
    // int & lvalue {2};   //error

    Box b1 ;
    Box b2 {b1};    //Copy constructor will be called
    Box b3;     
    b3 = b1;        //Assignment operator will be called
    //Carton * c1 = &b1;    //error can't convert Box* to Carton*
    Carton c1;
    Box * pb = &c1;
    return 0;
}