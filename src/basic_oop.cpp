
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
            this-> x_pos = b.x_pos;
            this-> y_pos = b.y_pos;
        }
        void operator=(const Box & b)
        {
            printf("Assignment operator\n");
            this-> x_pos = b.x_pos;
            this-> y_pos = b.y_pos;
        }        
        void Call()
        {
            printf("x_pos = %d, y_pos = %d\n", x_pos, y_pos);
        }

        virtual Box & operator+(const Box & b){};

    protected:
        float x_pos{0}, y_pos{0};
};

class Carton : public Box
{
    public:
        Carton() = default;     //Constructor must not be private

        Carton & operator+(const Carton & c)
        {


            return *this;
        }
    public :
        float x_pos, y_pos;
};
class Parent {
protected:
  void doSomething() {
    // ... protected implementation
    cout << "do something\n";
    v++;
  }

  int v;
};

class Child : public Parent {
public:
  void doSomethingElse() {
    this->doSomething(); // Calling parent's protected method directly
    // ... additional logic
    cout << v << endl;
  }
};


struct OwningInt
{
    OwningInt() :  mint(new int)
    {
    }
    
    ~OwningInt()
    {
        delete mint;
    }

    private :
        int * mint;
};

/** this function know that the integer has owning struct that control it's allocation deallocation in mem*/
void owningfunc(const OwningInt & arg)
{

}

int main (int argc , char * argv[])
{
    struct OwningInt;

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
    c1.x_pos = 2;
    c1.y_pos = 3;
    Carton C2 = c1;
    Box * pb = &c1;

    C2.Call();

    Child ch1;
    ch1.doSomethingElse();
    return 0;
}