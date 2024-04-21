#include <iostream>
#include <exception>

class Error1 : public std::exception
{
    public:
    Error1()
    {
      //  std::cout << "Error1 constructor"<<std::endl;
    }

    const char * what()
    {
        return "Error 1 what ";
    }
};

class Error2 : public Error1
{
    public:
    Error2()
    {
     //   std::cout << "Error2 constructor" << std::endl;
    }
    const char * what()
    {
        return "Error 2 what ";
    }    
};

class Error3 : public Error2
{
    public:
    Error3()
    {
     //   std::cout << "Error3 constructor" << std::endl;
    }
    const char * what()
    {
        return "Error 3 what ";
    }    
};

int main()
{
    try{
        throw Error3();
    }
    catch(std::string &s)
    {
        std::cout << "String" << std::endl;
    }
    catch(const char * s)
    {
        std::cout << "char *" << std::endl;
    }

    catch(std::exception & e)
    {
        std::cout << e.what() << " std::exception" << std::endl;
    }   
    catch(Error3 &e)
    {
        std::cout << e.what() << "error3" << std::endl;
    }
    catch(Error2 & e)
    {
        std::cout << e.what() << "error2" << std::endl;
    }
    catch(Error1 & e)
    {
        std::cout << e.what() << "error1" << std::endl;
    }
 

    return 0;
}
