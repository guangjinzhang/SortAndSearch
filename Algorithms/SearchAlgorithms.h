/* Following code demonstrates search algorithms header
*File Name: SearchAlgorithms.h
*Author: Guangjin Zhang
*Date:8/8/2018
*/
#ifndef SEARCHALGORITHMS_H_INCLUDED
#define SEARCHALGORITHMS_H_INCLUDED
// linearSearch function takes array name, its size and the key
// to search as arguments and returns the index of the key if it
// exists in the array else -1
int linearSearch(int list[], int numElements, int value);

// binarySearch function takes array name, its size and the key
// to search as arguments and returns the index of the key if it
// exists in the array else -1
int binarySearch(int array[], int numElems, int value);
void delay(int);
#endif // SEARCHALGORITHMS_H_INCLUDED
