#include <iostream>
#include <type_traits>

using namespace std;

class testclass
{
    public:
        testclass() = default;
        testclass(const testclass &){}//copy constructor
        testclass& operator=(const testclass& ){return *this;} // copy assignment operator
        testclass(testclass&& ){}//move constructor
        testclass& operator=(testclass  &&){return *this;}//move assignment operator
};

template <typename T>
void func(T var)
{
    if( is_integral<T>::value == true)
    {
        cout << "\tthis is integer" << endl;
    }
    else if( is_floating_point<T>::value == true)
    {
        cout << "\tthis is floating "<< var << endl;
    }
}

template<typename T>
void test_class_options(T& x)
{
    if(is_move_assignable<T>::value == true)
    {
        cout<< "\tclass has move assignmet operator" << endl;
    }
    if(is_move_constructible<T>::value == true)
    {
        cout<< "\tclass has move constructor" << endl;
    }
    if(is_copy_constructible<T>::value == true)
    {
        cout<< "\tclass has copy constructor" << endl;
    }    
    if(is_copy_assignable<T>::value == true)
    {
        cout<< "\tclass has copy assignment operator" << endl;
    }
}

int main()
{
    func(5);
    func(5.6587595258);
    testclass x ;
    test_class_options(x);
    //remove const
    //is_same       -> check if the two types are the same
    return 0;
}