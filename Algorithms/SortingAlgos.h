/* Following code demonstrates sorting algorithms header
*File Name: SortingAlgos.h
*Author: Guangjin Zhang
*Date:8/8/2018
*/
#ifndef SORTINGALGOS_H_INCLUDED
#define SORTINGALGOS_H_INCLUDED
//selection sort
void sortSelection(int[], int);
//insertion sort
void sortInsertion(int[], int);
//heap sort
int max (int arr[], int n, int i, int j, int k);
void downheap (int arr[], int n, int i);
void heapsort (int arr[], int n);
//quick sort
void quickSort( int[], int, int);
int partition( int[], int, int);
#endif // SORTINGALGOS_H_INCLUDED
