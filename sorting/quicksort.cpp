#include <iostream>
#include <vector>
#include "utilities.h"

using namespace std;

int partition (vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low;
    for(int j=low; j<high; j++){
        if (arr[j]<pivot){
            int temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            i++;
        }   
    }
    int temp = arr[i];
    arr[i]=arr[high];
    arr[high]=temp;

    return i;
}

void quickSort(vector<int>& arr, int low, int high) {
    if(low < high) {

        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot-1);
        quickSort(arr, pivot+1, high);

    }
}

void quicksort(vector<int>& arr, int l, int r){
    if(l>=r) return;

    int p = arr[r], i=l;
    for(int j=l; j<r; j++){
        if(arr[j]<p){
            swap(arr[j], arr[i]);
            i++;
        }    
    }
    swap(arr[i], arr[r]);

    quicksort(arr, l, i-1);
    quicksort(arr, i+1, r);
}

int main()
{   
    vector<int> arr = generateArray(10);
    int n = arr.size();
    
    int low = 0;
    int high = n-1;


    quicksort(arr, low, high);
    printArray<int>(arr, n);
    return 0;
}