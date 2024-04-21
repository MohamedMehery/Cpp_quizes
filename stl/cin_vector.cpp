#include <iostream>
#include <vector>

int main() {
    std::vector<int> integers;

    int num;
    while (std::cin >> num) {
        integers.push_back(num);
    }

    // Process the stored integers
    for (int num : integers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

