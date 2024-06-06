#include <iostream>
#include <vector>
#include "utilities.h"
using namespace std;

void bubbleSort(vector<int>& arr, int n){
    bool swapped = false;
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i-1); j++){ //no need to check till n-1 each time
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