#include <iostream>
//#include <memory>

using namespace std;

template <class T>
class Smart_prt
{
    public:
        Smart_prt(T * ptr = nullptr): Ptr(ptr)
        {
            ;
        }


        ~Smart_prt()
        {
            delete Ptr;
        }

        T& operator *()
        {
            return *Ptr;
        }

        T* operator ->()
        {
            return Ptr;
        }

    private:
        T* Ptr;
    
};

class Myclass
{
    int value;

    public:
        Myclass()
        {
            cout << " My class Constructor" << endl;
        }

        ~Myclass()
        {
            cout << " My class Distructor" << endl;
        }
};

int main(int argc , char * argv[])
{
    Smart_prt<Myclass> myclass_ptr (new Myclass);

    return 0;
}