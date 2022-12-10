//#include <iostream>
//
////Swapping 2 index between themselves
//void swap(int array[], int indexToReplace, int toReplaceWith) {
//    int temp = array[indexToReplace];
//    array[indexToReplace] = array[toReplaceWith];
//
//    array[toReplaceWith] = temp;
//}
//
//void selectionSort(int array[], int arraySize) {
//    int min;
//
////    The last element will be sorted
////    So we don't need to go through it
//    for (int i = 0; i < arraySize - 1; i++) {
//        min = i;
//
//        for (int j = i + 1; j < arraySize; j++) {
//            if (array[j] < array[min]) {
//                swap(array, min, j);
//            }
//        }
//    }
//}
//
////int main() {
////    int array[] = {53, 22, 105, 2013, 2, 0, 1, 15, 32, 108, 180, 5103};
////
////    selectionSort(array, sizeof(array) / sizeof(int));
////
////    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
////        std::cout << "array[" << i << "]: " << array[i] << std::endl;
////    }
////
////    return 0;
////}