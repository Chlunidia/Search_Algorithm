#include <iostream>

class SearchAlgorithm {
private:
    int arr[20];
    int n;
    int i;

public:
    void input() {
        while (true) {
            std::cout << "Enter the number of elements in the array: ";
            std::cin >> n;
            if (n > 0 && n <= 20)
                break;
            else
                std::cout << "\nArray should have minimum 1 and maximum 20 elements.\n";
        }

        std::cout << "\n----------------------";
        std::cout << "\nEnter array elements ";
        std::cout << "\n----------------------\n";
        for (i = 0; i < n; i++) {
            std::cout << "<" << (i + 1) << ">";
            std::cin >> arr[i];
        }
    }
};