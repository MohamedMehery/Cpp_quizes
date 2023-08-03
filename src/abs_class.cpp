/**
 * @brief this code show what is the abstract class, what is its features
*/
#include <iostream>

using namespace std;

class Shape
{
    private:
        int diameter_len;
    
    public:
        // this function is abstract class function that must be overloaded by child class
        virtual void draw_shap() = 0;

};

int main(int argc , char * argv[])
{


    return 0;
}