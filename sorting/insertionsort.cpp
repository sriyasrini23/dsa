#include <iostream>
#include <vector>
#include "print.h"
using namespace std;

void insertionSort(vector<int>& arr, int n){
        for(int i=1; i<n; i++){
            int key = arr[i];
            int j = i-1;
            while(arr[j]>key && j>=0){
                arr[j+1] = arr[j];
                j--;
            }
            arr[j+1] = key;
        }
}

int main()
{   
    vector<int> arr({8, 9, 2, 3, 5, 7, 4});
    int n = arr.size();
    insertionSort(arr, n);
    printArray<int>(arr, n);
    return 0;
}