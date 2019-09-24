/* Following code demonstrates insertion sort function
*File Name: InsertionSort.c
*Author: Guangjin Zhang
*Date:8/8/2018
*/
#include <stdio.h>
#include <stdlib.h>
#include"SortingAlgos.h"

void sortInsertion(int arr[], int arrSize){
    int j = 0, tmp = 0;
    for (int i = 1; i < arrSize; i++)
    {
        // a temporary copy of the current element
        tmp = arr[i];
        // find the position for insertion
        for (j = i; j > 0; j--)
        {
            if (arr[j - 1] < tmp)
                break;
            // shift the sorted part to right
            arr[j] = arr[j - 1];
        }
        // insert the current element
        arr[j] = tmp;
    }
}


