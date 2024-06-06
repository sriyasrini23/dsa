#include <iostream>
#include <vector>
#include "utilities.h"
using namespace std;

void selectionSort(vector<int>& arr, int n){
        for(int i=0; i<n; i++){
            int key = i;
            int keyvalue = arr[i];
            for(int j=i; j<n; j++){
                if(arr[j]<arr[key]){
                    key = j;
                }
            }
            int temp = arr[i];
            arr[i] = arr[key];
            arr[key] = temp;
        }
}

int main()
{   
    vector<int> arr({8, 9, 2, 3, 5, 7, 4});
    int n = arr.size();
    selectionSort(arr, n);
    printArray<int>(arr, n);
    return 0;
}