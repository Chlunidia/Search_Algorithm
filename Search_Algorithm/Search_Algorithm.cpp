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

    void binarySearch() {
        char ch;
        do {
            std::cout << "\nEnter element you want to search: ";
            int item;
            std::cin >> item;

            int lowerbound = 0;
            int upperbound = n - 1;
            int mid = (lowerbound + upperbound) / 2;
            int ctr = 0;

            while (item != arr[mid] && lowerbound <= upperbound) {
                if (item > arr[mid])
                    lowerbound = mid + 1;
                else
                    upperbound = mid - 1;

                mid = (lowerbound + upperbound) / 2;
                ctr++;
            }

            if (item == arr[mid])
                std::cout << "\n" << item << " found at position " << (mid + 1);
            else
                std::cout << "\n" << item << " not found in the array\n";

            std::cout << "\nNumber of comparisons: " << ctr;
            std::cout << "\nContinue search (y/n): ";
            std::cin >> ch;

        } while (ch == 'y' || ch == 'Y');
    }

    void linearSearch() {
        char ch;
        int ctr;
        do {
            std::cout << "\nEnter the element you want to search: ";
            int item;
            std::cin >> item;

            ctr = 0;
            for (i = 0; i < n; i++) {
                ctr++;
                if (arr[i] == item) {
                    std::cout << "\n" << item << " found at position " << (i + 1);
                    break;
                }
            }

            if (i == n)
                std::cout << "\n" << item << " not found in the array";

            std::cout << "\nNumber of comparisons: " << ctr;
            std::cout << "\nContinue search (y/n): ";
            std::cin >> ch;

        } while (ch == 'y' || ch == 'Y');
    }
};

int main() {
    SearchAlgorithm myList;
    int menuChoice;
    char ch;

    std::cout << "Menu Option\n";
    std::cout << "================\n";
    std::cout << "1. Linear Search\n";
    std::cout << "2. Binary Search\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter your choice (1, 2, 3): ";
    std::cin >> menuChoice;

    switch (menuChoice) {
        
    return 0;
}