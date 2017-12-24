// Modified version from https://www.geeksforgeeks.org/insertion-sort/
// Written by Phuc Tran

#include <stdio.h>
#include <math.h>
#include <iostream>
#include <string>

using namespace std;
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int length) {
   int i, key, j;
   for (i = 1; i < length; i++)
   {
       key = arr[i];
       j = i-1;

       /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}

// A utility function ot print an array of size n
string printArray(int arr[], int length) {
   int i;
   string a;
   for (i=0; i < length; i++)
       a += to_string(arr[i]) + " ";
   a += "\n";

   return a;
}



/* Driver program to test insertion sort */
int main() {
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original array: " << printArray(arr,n);
    insertionSort(arr, n);
    cout << "After sorted array: " << printArray(arr,n);
    
    return 0;
}
