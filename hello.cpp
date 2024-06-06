// Your First C++ Program

#include <iostream>

int main() {

    std::cout << "Hello World!";

    int arr[5] = {11, 22, 33, 44, 55};
    for(int i = 0; i < 5; i++){
	    std::cout<< arr[i] << std::endl;
    }
    return 0;
}
