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
        String()
        {
            pdata = nullptr;
            slen = 0;
        }
        String(const char * str)
        {
            slen = strlen(str);
            pdata = new char[slen];
            memcpy(pdata , str , slen);
        }
        String(const String & str)
        {
            cout << "Copy constructor\n";
            slen = str.slen;
            pdata = new char[slen];
            memcpy(pdata , str.pdata , slen);
        }
        String(String && str)
        {
            cout << "Move constructor" << endl;
            if( this != &str)
            {
                delete [] str.pdata ;

                pdata = str.pdata;
                slen = str.slen;

                str.pdata = nullptr;
                str.slen = 0;
            }
        }
        String & operator=(String && str)
        {
            cout << "Move assignment" << endl;
            if(this != &str)
            {
                delete [] pdata;

                pdata = str.pdata ;
                slen = str.slen;

                str.pdata = nullptr;
                str.slen = 0;
            }
            return *this;
        }
        String & operator()(String && str)
        {
            cout << "Move operator" << endl;
            if(this != &str)
            {
                delete [] pdata;

                pdata = str.pdata ;
                slen = str.slen;

                str.pdata = nullptr;
                str.slen = 0;
            }
            return *this;            
        }
        ~String()
        {
            delete [] pdata ;
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

    Dest((String &&)apple);    //Not the most elegent way and won't work all time

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