#include <iostream> 
#include "pointer.h"
using namespace std;
int binary_search(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = (high + low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (target > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return -1;
}
