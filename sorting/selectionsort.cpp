#include <iostream>
#include <vector>
#include "utilities.h"
using namespace std;

void selectionsort(vector<int>& arr) {
    for(int i=0; i<arr.size(); i++){
        int k = i;
        for(int j=i; j<arr.size(); j++)
            k = arr[j]<arr[k]? j: k;
        swap(arr[i], arr[k]);
    }
}

int main()
{
    vector<int> arr({8, 9, 2, 3, 5, 7, 4, 6, 1, 0});
    selectionsort(arr);
    printArray<int>(arr, arr.size());
    return 0;
}