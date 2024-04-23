#include <iostream>
#include <functional>

using namespace std;

struct Lamda{
    Lamda( int &ii) : i(ii)
    {
    }

    void operator() () {
        i++;
        cout << "struct " << i << endl;
    }

    private:
     int i;

};

// Define a function that takes a lambda as an argument
void executeLambda(std::function<void(void)> lambda) {
    lambda();
}

int main()
{

    int ii = 1,i = 1;
    auto mylamda = [i]()mutable {
        i++;
        cout << "Lamda " << i << endl;
    };

    mylamda();
    mylamda();
    struct Lamda l1(ii);
    l1();
    l1();
    cout << ii << endl;
    return 0;
}