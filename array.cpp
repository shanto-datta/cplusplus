// Your First C++ Program

#include <iostream>

int main() {
    int size;

    std::cout << "Enter how many numbers you want to input:";
    std::cin >> size;

    int arr[size];
    std::cout << "Enter Input:";

    for(int i = 0; i < size; i++){
        std::cin >> arr[i];
    }

    for(int i = 0; i < size; i++){
        std::cout << arr[i];
    }

    return 0;
}
