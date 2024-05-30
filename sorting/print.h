#include<stdio.h>
using namespace std;

template <typename type = int> void printArray(vector<type>& arr, int n){
    for(int i=0; i<n; i++){
        cout << " " << arr[i];
    }
}
template <typename type = int> void printArray(type arr[], int n){
    for(int i=0; i<n; i++){
        cout << " " << arr[i];
    }
}