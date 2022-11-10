#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    int comparision = 0, swaps = 0;
    for (int j = 0; j < n - 1; j++)
    {
        int iMin = j;
        for (int i = j + 1; i < n; i++)
        {
            cout << "comparing : " << arr[iMin] << " and " << arr[i] << endl;
            comparision += 1;
            if (arr[i] < arr[iMin])
            {
                iMin = i;
            }
        }
        if (iMin != j)
        {
            swaps += 1;
            cout << "swaping:- " << arr[j] << " and " << arr[iMin] << endl;
            swap(arr[j], arr[iMin]);
        }
    }
    cout << " total comparisions = " << comparision << " total swaps:- " << swaps << endl;
}

void bubbleSort(int arr[], int n)
{
    int comparision = 0, swaps = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            cout << "comparing " << arr[j] << " and " << arr[j + 1] << endl;
            comparision += 1;
            if (arr[j] > arr[j + 1])
            {
                cout << "Swaping :- " << arr[j] << " and " << arr[j + 1] << endl;
                swap(arr[j], arr[j + 1]);
                swaps += 1;
            }
        }
    }
    cout << "comparisions = " << comparision << " swaps:- " << swaps << endl;
}

int main()
{
    int n = 5;
    int arr[5] = {2, 0, 1, 4, 3};
    cout << "SELECTION SORT" << endl;
    selectionSort(arr, n);
    cout << "The Sorted Array by using Selection Sort is : ";
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";

    cout << endl;
    cout << "BUBBLE SORT" << endl;
    int arr2[8] = {20,10,30,19,99};
    bubbleSort(arr2, 5);
    cout << "The Sorted Array by using Bubble Sort is : ";
    for (int i = 0; i < n; ++i)
        cout << arr2[i] << " ";
}

// Q3:- Bubble Sort is an inplace method which needs to modify current array to sort the __cpp_lib_incomplete_container_elements

//      while Insertion sort can be implemented in inplace as well as out place method
//     In-Place Implementation -> Selection sort can be implemented without using extra space,by just modifying the given input array.The smallest element can be placed in beginning of unsorted array
//     Out-place Implementation -> Selection sort can also be implemented by making an extra array, finding the minimum from given input array and placing that element in new array

// <----------OUTPUT--------------------->
// SELECTION SORT
// comparing : 2 and 0
// comparing : 0 and 1
// comparing : 0 and 4
// comparing : 0 and 3
// swaping:- 2 and 0
// comparing : 2 and 1
// comparing : 1 and 4
// comparing : 1 and 3
// swaping:- 2 and 1
// comparing : 2 and 4
// comparing : 2 and 3
// comparing : 4 and 3
// swaping:- 4 and 3
//  total comparisions = 10 total swaps:- 3
// The Sorted Array by using Selection Sort is : 0 1 2 3 4 
// BUBBLE SORT
// comparing 20 and 10
// Swaping :- 20 and 10
// comparing 20 and 30
// comparing 30 and 19
// Swaping :- 30 and 19
// comparing 30 and 99
// comparing 10 and 20
// comparing 20 and 19
// Swaping :- 20 and 19
// comparing 20 and 30
// comparing 30 and 99
// comparing 10 and 19
// comparing 19 and 20
// comparing 20 and 30
// comparing 30 and 99
// comparing 10 and 19
// comparing 19 and 20
// comparing 20 and 30
// comparing 30 and 99
// comparisions = 16 swaps:- 3
// The Sorted Array by using Bubble Sort is : 10 19 20 30 99