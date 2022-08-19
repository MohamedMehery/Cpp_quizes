#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;
int strlen(const char * str)
{
    int count = 0;
    while(str[count] != '\0')count++;
    return count;
}

class String 
{
    private:
        char * pdata;
        int slen ;

    public:
        String() : slen (0)
        {
            pdata = nullptr;
        }
        String(const char * str)
        {
            printf("Create\n");
            slen = strlen(str);
            pdata = new char[slen];
            memcpy(pdata , str , slen);
        }

        String(const String & str ) //const reference can be lvalue or rvalue, copy constructor
        {
            cout << "Copy" << endl;
            slen = str.slen;
            pdata = new char[slen];
            memcpy(pdata , str.pdata , slen);
        }

        String(String && str) noexcept
        {
            cout << "Move Constructor" << endl;
            
            delete [] str.pdata ;
            pdata = str.pdata;
            slen = str.slen;

            str.pdata = nullptr;
            str.slen = 0;
        }        

        String& operator=(String && str) noexcept
        {
            cout << "Move Assignment" << endl;
            if(this !=  &str)
            {
                delete [] pdata;
                pdata = str.pdata;
                slen = str.slen;
                str.pdata = nullptr;
                str.slen = 0;                
            }
            return *this;
        }

        ~String()
        {
            cout << "Destroyed" << endl;
            delete [] pdata;
            pdata = nullptr;
            slen = 0;
        }

        void print()
        {
            for(auto i = 0 ; i < slen ; i++)
            {
                cout << pdata[i];
            }
            cout << endl;
        }
};

int main(int argc , char * argv[])
{
    String apple = "Apple";
    String Dest ;

    cout << "Before move\n";
    cout << "Apple : ";
    apple.print();
    cout << "Dest : ";
    Dest.print();

    Dest = (String &&)apple;

    cout << "After apple moved to Dest\n";
    cout << "Apple : ";
    apple.print();
    cout << "Dest : ";
    Dest.print();

    String temp(std::move(Dest));
    cout << "After Dest move to temp\n";
    cout << "Dest : ";
    Dest.print();
    cout << "temp : ";
    temp.print();    
    // print input argument to main, iterate on argc which is count of arguments
    // for(auto i = 0 ; i < argc ; i++)
    // {
    //     cout << '\t' << argv[i];
    // }cout << endl;
    return 0;
}