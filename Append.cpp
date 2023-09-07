#include <iostream>

int main() {
    int originalArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int newArray[11]; 
    int newItem = 11; 
    for (int i = 0; i < 10; i++) {
        newArray[i] = originalArray[i];
    }
    newArray[10] = newItem;
    std::cout << "Updated array: [";
    for (int i = 0; i < 11; i++) {
        std::cout << newArray[i];
        if (i < 10) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;

    return 0;
}
