#include <vector>
#include "utilities.h"
using namespace std;

void selectionsort(vector<int>& arr) {
    for(int i=0; i<arr.size(); i++){
        int k=i;
        for(int j=i; j<arr.size(); j++)
            k=arr[j]<arr[k]? j: k;
        swap(arr[i], arr[k]);
    }
}

void insertionsort(vector<int>& arr) {
    for(int i=1; i< arr.size(); i++){
        int key = arr[i];
        int j;
        for(j = i-1; j>=0 && arr[j]>key; j--)
            arr[j+1]=arr[j];
        arr[j+1]=key;
    }
}

void bubblesort(vector<int>& arr) {
    bool swapped = false;
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<arr.size()-i-1; j++)
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        if(!swapped) return;
    }
}

void mergesort(vector<int>& arr, int l, int r){
    if(l>=r) return;
    
    int m = (l+r)/2;

    mergesort(arr,l, m);
    mergesort(arr, m+1, r);

    int ln = m-l+1;
    vector<int> larr(ln, 0);
    for(int i=0; i<ln; i++)
        larr[i]=arr[l+i];
    
    int rn = r-m;
    vector<int> rarr(rn, 0);
    for(int i=0; i< rn; i++)
        rarr[i]=arr[m+1+i];

    for(int i=0, j=0, k=l; i<ln || j<rn; k++){
        bool inlbound = i<ln;
        bool inrbound = j<rn;
        bool inbounds = inlbound && inrbound;
        bool lessthan = larr[i]<=rarr[j];

        if((inbounds && lessthan)||!inrbound){
            arr[k] = larr[i];
            i++;
        }
        else if((inbounds && !lessthan)||!inlbound){
            arr[k] = rarr[j];
            j++;
        }
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
