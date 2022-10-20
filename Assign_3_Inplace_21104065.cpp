// Ans 2 (A):

// Insertion sort using inplace 
#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << "  ";
	cout << endl;
}


void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
        cout<<"\nfor i = "<<i<<" and key = "<<key<<"-*-*-*-*-*-*-*-*-*-*-\n\n";
		while (j >= 0 && arr[j] > key)
		{
            cout<<"for i = "<<i<<" and j = "<<j<<endl;
			arr[j + 1] = arr[j];
			j = j - 1;
            printArray(arr, n);
            cout<<endl;
		}
		arr[j + 1] = key;
        cout<<"Sorting till key "<<key<<" is complete \n";
        printArray(arr, n);
	}
    cout<<endl;
}

// Driver code
int main()
{
	int arr[] = {2,4,6,8,10,12};
	int N = sizeof(arr) / sizeof(arr[0]);

	cout << "\nOrignal array: \n";
    printArray(arr, N);
    
	insertionSort(arr, N);
	cout << "Sorted array: \n";
	printArray(arr, N);


	return 0;
}