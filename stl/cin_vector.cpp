#include <iostream>
#include <vector>
using namespace std;

int main() {
    std::vector<int> integers;

    int num=1,i=0;
    while (num != 0) {
        cin >> num;
        integers.push_back(num);
        cout << "recieved" << integers[i++] << endl;
    }

    // cin >> s;
    // Process the stored integers
    for (int num : integers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    cin >> i;
}

