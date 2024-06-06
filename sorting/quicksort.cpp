#include <iostream>
#include <vector>
#include "utilities.h"

using namespace std;

int partition (vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<high; j++){
        if (arr[j]<pivot){
            i++;
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
       
    }
    int temp = arr[i+1];
    arr[i+1]=arr[high];
    arr[high]=temp;

    return i+1;
}



void quickSort(vector<int>& arr, int low, int high) {
    if(low < high) {

        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);

    }
}

int main()
{   
    vector<int> arr = generateArray(1000);
    int n = arr.size();
    
    int low = 0;
    int high = n-1;


    quickSort(arr, low, high);
    printArray<int>(arr, n);
    return 0;
}