#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
template<typename T>
void print_vector(vector<T> &v)
{
    // Process the stored integers
    for (T num : v) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
int main()
{
    vector <int> source = {1, 2, 3, 4, 5};
    vector <int> dest (5);
    
    copy_if(begin(source), end(source) , begin(dest), 
    [](auto elem) {return elem % 2 == 0;} );
    print_vector<int>(dest);
    return 0;
}