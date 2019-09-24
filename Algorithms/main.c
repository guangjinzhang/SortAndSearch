/* Following code demonstrates main run function fo Final Project
*File Name: main.c
*Author: Guangjin Zhang
*Date:8/8/2018
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<math.h>
#include "SortingAlgos.h"
#include "SearchAlgorithms.h"
#define MAX 1000000 // Maximum for pseudo-random number generator
#define MIN 1 // Minimum for pseudo-random number generator

int SIZE=100;// size of the array
int main (){
    void runSelectionSort();
    void runInsertionSort();
    void runHeapSort();
    void runLinearSearch();
    void runBinarySearch();
    srand(time(NULL));

    //keeping enter
    while(1){
        //main menu
        printf("\nMenu:");
        printf("\nEnter your choice");
        printf("\n1. Searching algorithms");
        printf("\n2. Sorting algorithms");
        printf("\n0. Exit");
        printf("\n");
        int n1=0;
        scanf("%d",&n1);

        //searching algorithms
        if(n1==1){
            //select size
            printf("\nSelect size of dataset");
            printf("\n1. Small");
            printf("\n2. Medium");
            printf("\n3. Large");
            printf("\n0. Exit");
            printf("\n9. Go back to main menu");
            printf("\n");
            int n2=0;
            scanf("%d",&n2);
            switch(n2){
                case 0:
                    exit(0);
                case 1:
                    SIZE=100000;
                    break;
                case 2:
                    SIZE=500000;
                    break;
                case 3:
                    SIZE=1000000;
                    break;
                case 9:
                    continue;
                default:
                    printf("Error");
            }
            //select search algorithm
            printf("\nEnter your choice of search algorithms:");
            printf("\n1. Linear search");
            printf("\n2. Binary search");
            printf("\n0. Exit");
            printf("\n9. Go back to main menu");
            printf("\n");
            int n3=0;
            scanf("%d",&n3);
            switch(n3){
                case 0:
                    exit(0);
                case 1:
                    runLinearSearch();
                    break;
                case 2:
                    runBinarySearch();
                    break;
                case 9:
                    continue;
                default:
                    printf("Error");
            }
        }
        //sort algorithms
        else if(n1==2){
            //select size
            printf("\nSelect size of dataset");
            printf("\n1. Small");
            printf("\n2. Medium");
            printf("\n3. Large");
            printf("\n0. Exit");
            printf("\n9. Go back to main menu");
            printf("\n");
            int n2=0;
            scanf("%d",&n2);
            switch(n2){
                case 0:
                    exit(0);
                case 1:
                    SIZE=100000;
                    break;
                case 2:
                    SIZE=500000;
                    break;
                case 3:
                    SIZE=1000000;
                    break;
                case 9:
                    continue;
                default:
                    printf("Error");
            }
            //select sort algorithm
            printf("\nEnter your choice of sort algorithms:");
            printf("\n1. Selection sort");
            printf("\n2. Insertion sort");
            printf("\n3. Heap sort");
            printf("\n0. Exit");
            printf("\n9. Go back to main menu");
            printf("\n");
            int n3=0;
            scanf("%d",&n3);
            switch(n3){
                case 0:
                    exit(0);
                case 1:
                    runSelectionSort();
                    break;
                case 2:
                    runInsertionSort();
                    break;
                case 3:
                    runHeapSort();
                    break;
                case 9:
                    continue;
                default:
                    printf("Error");
            }
        }
        //exit
        else if(n1==0){
            exit(0);
        }
        //error
        else{
            printf("Error");
        }
    }//end while
return 0;
}

//run selection sort
void runSelectionSort(){
    //create random array
    int arr[SIZE];
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int ctr = 0; ctr < SIZE; ctr++){
        arr[ctr]= rand()%(MAX-MIN) + MIN;
    }
    //print last 100 unsorted dataset
    printf("Last hundred elements of the unsorted dataset:\n");
    for ( int dex1 = SIZE-100; dex1 < SIZE; dex1++){
        printf("%d \t", arr[dex1]);
    }
    printf("\n");
    //set start time
    int startTimeSelectionSort = time(NULL);
    //sort array
    sortSelection(arr, arrSize);
    //print sort time and last 100 sorted dataset
    printf("\nSelection sort time: %d\n",time(NULL) - startTimeSelectionSort);
    printf("\nLast hundred elements of the sorted dataset:\n");
    for ( int dex1 = SIZE-100; dex1 < SIZE; dex1++){
        printf("%d \t", arr[dex1]);
    }
    printf("\n");
}

//run insertion sort
void runInsertionSort(){
    //create random array
    int arr[SIZE];
    int arrSize = sizeof(arr)/sizeof(arr[0]);
    for(int ctr = 0; ctr < SIZE; ctr++){
        arr[ctr]= rand()%(MAX-MIN) + MIN;
    }
    //print last 100 unsorted dataset
    printf("Last hundred elements of the unsorted dataset:\n");
    for ( int dex1 = SIZE-100; dex1 < SIZE; dex1++){
        printf("%d \t", arr[dex1]);
    }
    printf("\n");
    //set start time
    int startTimeInsertionSort = time(NULL);
    //sort array
    sortInsertion(arr, arrSize);
    //print sort time and last 100 sorted dataset
    printf("\nInsertion sort time: %d\n",time(NULL) - startTimeInsertionSort);
    printf("\nLast hundred elements of the sorted dataset:\n");
    for ( int dex1 = SIZE-100; dex1 < SIZE; dex1++){
        printf("%d \t", arr[dex1]);
    }
    printf("\n");
}

//run heap sort
void runHeapSort(){
    //create data structure
    typedef struct{
        int a[SIZE];
    }Data;
    //set memary
    Data* ptr = malloc(sizeof(Data));
    //create random array
    for (int dex = 0; dex < SIZE; dex++)
    {
        ptr->a[dex] = rand()%(MAX-MIN) + MIN;
    }
    //print last 100 unsorted dataset
    printf("Last hundred elements of the unsorted dataset:\n");
    for (int i = SIZE - 100; i < SIZE; i++){
        printf("%s%7d", i%10== 0 ? "\n" : " ", ptr->a[i]);
    }
    printf("\n");
    //set start time
    int startTimeHeapSort = time(NULL);
    //sort array
    heapsort(ptr, SIZE);
    //print sort time and last 100 sorted dataset
    printf("\nHeap sort time: %d\n",time(NULL) - startTimeHeapSort);
    printf("\nLast hundred elements of the sorted dataset:\n");
    for (int i = SIZE-100; i < SIZE; i++){
        printf("%s%7d", i%10== 0 ? "\n" : " ", ptr->a[i]);
    }
    printf("\n");
}

//run linear search
void runLinearSearch(){
    int indexofNumberToSearch = 0;
    //create random array
    int arr[SIZE];
    for(int dex = 0; dex < SIZE; dex++){
        arr[dex] = rand()%(MAX - MIN) + MIN;
    }
    //create random search number
    int numberToSearch = arr[rand()% SIZE ];
    //print serach number
    printf("\nLooking for %d in the array", numberToSearch);
    //set start time
    int linearSearchStartTime = time(NULL);
    //search number
    indexofNumberToSearch = linearSearch(arr, SIZE, numberToSearch);
    //print search time
    printf("\nTime taken by linear search is %d sec.", time(NULL) - linearSearchStartTime);
    //if the return position is -1, print not found, else print the position
    if(indexofNumberToSearch==-1){
        printf("\nnumber not found\n");
    }else{
        printf("\nThe number %d is at position %d \n", arr[indexofNumberToSearch], indexofNumberToSearch);
    }
    printf("\n");
}

//run binary search
void runBinarySearch(){
    int indexofNumberToSearch = 0;
    //create random array
    int arr[SIZE];
    srand(time(NULL));
    for(int dex = 0; dex < SIZE; dex++){
        arr[dex] = rand()%(MAX - MIN) + MIN;
    }
    //create random search number
    int numberToSearch = arr[rand()% SIZE ];
    //print serach number
    printf("\nLooking for %d in the array", numberToSearch);
    //sort array
    quickSort(arr, 0, SIZE - 1);
    //set start time
    int binarySearchStartTime = time(NULL);
    //search number
    indexofNumberToSearch = binarySearch(arr,SIZE,numberToSearch);
    //print search time
    printf("\nTime taken by binary search is %d sec.", time(NULL) - binarySearchStartTime);
    //if the return position is -1, print not found, else print the position
    if(indexofNumberToSearch==-1){
        printf("\nnumber not found\n");
    }
    else{
        printf("\nThe number %d is at position %d \n", arr[indexofNumberToSearch], indexofNumberToSearch);
    }
    printf("\n");
}
