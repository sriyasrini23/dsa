#include <iostream>
#include <vector>
#include "print.h"
using namespace std;

void bubbleSort(vector<int>& arr, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-1); j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }     
}

int main()
{   
    vector<int> arr({8, 9, 2, 3, 5, 7, 4});
    int n = arr.size();
    bubbleSort(arr, n);
    printArray<int>(arr, n);
    return 0;
}