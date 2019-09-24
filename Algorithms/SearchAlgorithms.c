/* Following code demonstrates search algorithms
*File Name: SearchAlgorithms.c
*Author: Guangjin Zhang
*Date:8/8/2018
*/
#define COUNTER 100000

void delay(int max){
    float sum=0;
    for(int dex = 0; dex < max; dex++){
        sum+=dex;
    }
}

//linear search function
int linearSearch(int list[], int numElements, int value) {
    int index = 0, position = -1, found = 0;
    //when not meet the end of array and not found value, continue to search
    while (index < numElements && !found) {
        // introduce known delay
        delay(COUNTER);
        //if found value, store the position and set to found
        if (list[index] == value) {
            found = 1;
            position = index;
        }
        //keeping search
        index++;
    }
    return position;
}

//binary search function
int binarySearch(int array[], int numElems, int value) {
    int first = 0, last = numElems-1, middle, position = -1, found = 0;
    //when has value that not be searched in array and not found value, continue to search
    while(!found && first <= last) {
        //get the middle value of array
        middle = (first + last) / 2;
        //if the middle is same as search value, store the position and set to found
        if (array[middle] == value) {
            found = 1;
            position = middle;
        }//if search value less than the middle value, search the left part
        else if (array[middle] > value){
            last = middle -1;
            // introduce  known delay
            delay(COUNTER);
        }//if search value larger than the middle value, search the right part
        else{
            first = middle + 1;
            // introduce  known delay
            delay(COUNTER);
        }
    }
    return position;
}


