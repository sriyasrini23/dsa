#include <iostream>
#include <cstdlib>  
#include <time.h>
#include <limits>
#include <vector>
using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

template <typename type = int> void printArray(vector<type>& arr, int n){
    for(int i=0; i<n; i++){
        cout << " " << arr[i];
    }
    cout << "\n";
}
template <typename type = int> void printArray(type arr[], int n){
    for(int i=0; i<n; i++){
        cout << " " << arr[i];
    }
    cout << "\n";
}

vector<int> generateArray(int size){
    srand((unsigned)time(NULL)); 
    
    int lb = INT_MIN, ub = INT_MAX -1; 
    
    vector<int> array;
    
    for (int i = 0; i < size; i++) {
        array.push_back(rand() % (ub + 1));
    }

    return array;
}
