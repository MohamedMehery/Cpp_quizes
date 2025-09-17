#include <iostream>
#include <cstring>

class Heavy_source{
    private:
        size_t size_;
        char* data_;

    public:
        // Constructor
        Heavy_source(size_t size): size_(size), data_(new char[size])
        {
            std::memset(data_, 0 ,size);
            std::cout << "Constructed with size " << size_ << std::endl;
        }

        //copy constructor deep copy all data 
        Heavy_source(const Heavy_source &other) : size_(other.size_), data_(new char[other.size_])
        {
            std::memcpy(data_, other.data_, size_);
            std::cout << "Copied with size " << size_ << std::endl;            
        }

        // Move constructor, transfers ownership or resource
        Heavy_source(Heavy_source &&other): size_(other.size_), data_(other.data_)
        {
            other.size_= 0;
            other.data_ = nullptr;
            std::cout << "Moved with size " << size_ << std::endl;
        }

        //Destructor
        ~Heavy_source()
        {
            delete[] data_;
            size_ = 0;
            data_ = nullptr;
            std::cout << "Destroyed with size " << size_ << std::endl;
        }
};

Heavy_source create_source()
{
    Heavy_source temp(10000000);
    Heavy_source copy_obj = Heavy_source(temp);
    Heavy_source Move_obj = Heavy_source(std::move(copy_obj) );
    return temp;
}

int main()
{
    Heavy_source obj = create_source();
    return 0;
}