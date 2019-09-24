/* Following code demonstrates selection sort function
*File Name: SelectionSort.c
*Author: Guangjin Zhang
*Date:8/8/2018
*/
#include <stdio.h>
#include <stdlib.h>
#include"SortingAlgos.h"

void sortSelection(int arr[], int arrSize){
    int min = 0, temp = 0;
    for (int i = 0; i < arrSize ; i++)
    {
        min = i;  // record the position of the smallest
        for (int j = i + 1; j < arrSize; j++)
        {
            // update min when finding a smaller element
            if (arr[j] < arr[min])
                min = j;
        }
        // put the smallest element at position i
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
