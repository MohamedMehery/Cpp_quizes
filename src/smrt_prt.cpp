#include <iostream>
#include <memory>

using namespace std;

template <class T>
class Unique_ptr
{
    public:

        Unique_ptr(): entity(new(T))
        {
            cout << "Unique ptr constructor!\n";
        }

        Unique_ptr(T & init): entity(new(T))
        {
            *this->entity = init;
            cout << "Unique ptr copy constructor!\n";
        }

        Unique_ptr(T && init): entity(new(T))
        {
            *this->entity = init;
            cout << "Unique ptr move constructor!\n";
        }

        ~Unique_ptr()
        {
            if(!entity)
            {
                delete entity;
                entity = 0;
            }
            cout << "Unique ptr distructor\n";
        }

        void operator = (const Unique_ptr && up) 
        {
            this->entity = up.entity;
        }

        T& operator *() const
        {
            return *this->entity;
        }

    private:
        T* entity;
};

int main()
{
    Unique_ptr<int> ptr((int)6);
    Unique_ptr<int> p2;
    // p2 = ptr;    // unique ptr can't be copied
    p2 = move(ptr);
    cout << *p2 << endl;
    return 0;
}
