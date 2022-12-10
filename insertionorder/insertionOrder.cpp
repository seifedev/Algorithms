#include <iostream>

//Swapping 2 index between themselves
void swap(int array[], int indexToReplace, int toReplaceWith) {
    int temp = array[indexToReplace];
    array[indexToReplace] = array[toReplaceWith];

    array[toReplaceWith] = temp;
}

void insertionOrder(int array[], int size) {
    for (int i = 1; i < size; i++) {
        for (int j = i; (j > 0) && (array[j] < array[j - 1]); j--) {
            swap(array, j, j - 1);
        }
    }
}

int main() {
    int array[] = {53, 22, 105, 2013, 2, 0, 1, 15, 32, 108, 180, 5103};

    insertionOrder(array, sizeof(array) / sizeof(int));

    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        std::cout << "array[" << i << "]: " << array[i] << std::endl;
    }

    return 0;
}