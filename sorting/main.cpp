#include <iostream>
#include "sort.h"
#include <vector>

int main()
{
    while(true) {
        vector<int> arr = generateArray(10);
        int choice;
    
        cout << "\n";
        cout << "1. Selection Sort" << "\n";
        cout << "2. Insertion Sort" << "\n";
        cout << "3. Bubble Sort" << "\n";
        cout << "4. Merge Sort" << "\n";
        cout << "5. Quick Sort" << "\n";
        cout << "0. Exit" << "\n";

        cout << "\n" << "Please choose an option: ";
        cin >> choice;

        cout << "\n" << "Array: ";
        printArray<int>(arr, arr.size());
        
        switch(choice){
            case 1:
                selectionsort(arr);
                break;
            case 2:
                insertionsort(arr);
                break;
            case 3:
                bubblesort(arr);
                break;
            case 4:
                mergesort(arr, 0, arr.size()-1);
                break;
            case 5:
                quicksort(arr, 0, arr.size()-1);
                break;
            case 0:
                cout << "Exiting the program ..." << "\n" << "\n";
                exit(0);
                break;
            default:
                cout << "Invalid option! Array Not ";
                break;
        }

        cout <<"Sorted: ";
        printArray<int>(arr, arr.size());

    }

    
    return 0;
}