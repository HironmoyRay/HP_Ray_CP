#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int unique_pyani = 0;
    int pyani;

    for (int i = 0; i < n; i++) {
        std::cin >> pyani;
        unique_pyani ^= pyani;
    }

    std::cout << unique_pyani << std::endl;

    return 0;
}
