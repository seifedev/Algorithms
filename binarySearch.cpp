#include <iostream>

/**
 *
 * @param table An ordered table.
 * @param endGoal The number we want to find.
 * @param left The index on the half left side.
 * @param right The index on the half right side.
 * @return -1 if the item wasn't found, otherwise the position the item is at.
 */
int binarySearch(int table[], int endGoal, int left, int right) {
//    If we enter here it means our algorithm has finished.
//    And our endGoal item wasn't found.
    if (left > right) {
        return -1;
    }

    int mid = (left + right) / 2;

    if (table[mid] == endGoal) {
        return mid;
    } else if (table[mid] < endGoal) {
        return binarySearch(table, endGoal, mid + 1, right);
    }


    return binarySearch(table, endGoal, left, mid - 1);
}

//int main() {
//
//    int table[] = {12, 32, 51, 125, 968, 1032, 8532, 50001, 7812301, 91239123};
//
//    std::cout << binarySearch(table, 8532, 0, 9);
//    return 0;
//}

