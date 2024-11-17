

	// Question #2
/*
	
#include <iostream>
using namespace std;

void selectionSort(int array[], int n) {
	
	for(int i=0; i < n - 1; i++) {
		int min = i;
		for(int j = i+1; j < n ; j++) {
			if(array[j] > min) {
				min = j; // change the index of found largest element
			}
		}
		// Swap the find largest element at first in unsorted array
		int temp = array[min];
		array[min] = array[i];
		array[i] = temp;
			
		cout << "Iteration " << i + 1 << ": ";
        for (int k = 0; k < n; k++) {
            cout << array[k] << " ";
        }
        cout << endl;
	}
}

int main() {
	
	int n = 5;
	int array[n] = {5,2,3,6,7};

	selectionSort(array, n);
	
	cout << "Sorted array (Descending Order): " ;
	for(int i=0; i < n; i++) {
		cout << array[i] << " ";
	}
	
	return 0;
}
*/