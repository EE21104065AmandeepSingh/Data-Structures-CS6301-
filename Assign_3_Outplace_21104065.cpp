//Ans 2 (b) ;

// Insertion sort using outplace 

#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		cout << arr[i] << "  ";
	cout << endl;
}


int insertionSort(int arr[], int n)
{
	int temp[n];
	for (int k = 0; k < n; k++)
	{
		temp[k]= arr[k];
	}
	
	
	int i, key, j;
	for (i = 1; i < n; i++)
	{
		key = temp[i];
		j = i - 1;
        cout<<"\nfor i = "<<i<<" and key = "<<key<<"-*-*-*-*-*-*-*-*-*-*-*->>\n\n";
		while (j >= 0 && temp[j] > key)
		{
            cout<<"for i = "<<i<<" and j = "<<j<<endl;
			temp[j + 1] = temp[j];
			j = j - 1;
            printArray(temp, n);
            cout<<endl;
		}
		temp[j + 1] = key;
        cout<<"Sorting till key "<<key<<" is complete \n";
        printArray(temp, n);
	}
    cout<<endl;
	return temp, n;
}

// Driver code
int main()
{
	
	int arr[] = {2,4,6,8,10,12};
	int N = sizeof(arr) / sizeof(arr[0]);

	cout << "\nOrignal array: \n";
    printArray(arr, N);
    
	insertionSort(arr, N);

	return 0;
}