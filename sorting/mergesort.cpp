#include <iostream>
#include <vector>
#include "utilities.h"
using namespace std;

void merge(vector<int>& arr, int l, int m, int r) {

    const int ln = m - l + 1; // add one to get array size instead of last index value. 
    const int rn = r - m;

    vector<int> larr(ln, 0);
    vector<int> rarr(rn, 0);

    for(int i = 0; i < ln; i++){
        larr[i] = arr[l+i];
    }

    for(int i = 0; i < rn; i++){
        rarr[i] = arr[m+1+i];
    }

    int i = 0, j = 0; // initialise variables seperately
    int k = l; // remember not to initialise to 0
    while(i<ln && j<rn){
        if(larr[i]<= rarr[j]){
            arr[k] = larr[i];
            i++;
        }
        else {
            arr[k] = rarr[j];
            j++;
        }
        k++;
    }

    while(i<ln) {
        arr[k] = larr[i];
        i++; k++;
    }
    while(j<rn) {
        arr[k] = rarr[j];
        j++; k++;
    }
}

void mergeSort(vector<int>& arr, int l, int r){
    if(r<=l) // run only when l < r
        return;
        
    int m = (l+r)/2;

    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);

    merge(arr, l, m, r);

}

int main()
{   
    vector<int> arr({8, 9, 2, 3, 5, 7, 4, 5, 8, 1, 0});
    int n = arr.size();
    printArray<int>(arr, n);
    mergeSort(arr, 0, n-1);
    printArray<int>(arr, n);
    return 0;
}