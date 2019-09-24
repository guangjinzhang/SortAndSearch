/* Following code demonstrates heap sort function
*File Name: HeapSort.c
*Author: Guangjin Zhang
*Date:8/8/2018
*/
#include <stdio.h>
#include <stdlib.h>
#include "SortingAlgos.h"
//find the largest value in array
int max (int *arr, int arrSize, int i, int j, int k) {
    int m = i;
    if (j < arrSize && arr[j] > arr[m]) {
        m = j;
    }
    if (k < arrSize && arr[k] > arr[m]) {
        m = k;
    }
    return m;
}
//i represents the limit of how far down the heap to sift
void downheap (int *arr, int arrSize, int i) {
    while (1) {
        //calculate the max value from parent, left and right child
        int j = max(arr, arrSize, i, 2 * i + 1, 2 * i + 2);
        if (j == i) {
            break;
        }
        //update the parent node
        int t = arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        i = j;
    }
}
//heap sort function
void heapsort (int *arr, int arrSize) {
    int i;
    //search from the root
    for (i = (arrSize - 2) / 2; i >= 0; i--) {
        downheap(arr, arrSize, i);
    }
    //repeat to continue to shift down the child
    for (i = 0; i < arrSize; i++) {
        int t = arr[arrSize - i - 1];
        arr[arrSize - i - 1] = arr[0];
        arr[0] = t;
        downheap(arr, arrSize - i - 1, 0);
    }
}
