#include <iostream>
#include <vector>

// note: const before std::vector<double>
// and the & afterwards
int search_vector(int n, const std::vector<int>& vin) {
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] == n) {
            return i;
        }
    }

    return -1;
}

int main() {
    std::vector<int> v = {3, 5, -1, 5};

    std::cout << search_vector(3, v) << std::endl;
    std::cout << search_vector(5, v) << std::endl;
    std::cout << search_vector(-1, v) << std::endl;
    std::cout << search_vector(8, v) << std::endl;

}