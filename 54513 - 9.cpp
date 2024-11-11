	
	// Question #1
/*
#include <iostream>
using namespace std;

void insertionSort(int array[]) {
    
    for(int i=1; i < 5 ; i++) {
        
        int temp = array[i];
        int j=i-1;
        
        while(j>=0 && array[j] < temp){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = temp;
    }
}

int main()
{
    
    int n =5;
    cout << "Enter Five number in any order: " << endl;
    int array[n];
    
    for(int i=0; i < n; i++) {
        cin>>array[i];
    }
    
    insertionSort(array);
    
    cout << "*Sorted Array in Desending Order*" << endl << endl;
    
    for(int k=0; k <n; k++) {
        cout << array[k] << " ";
    }
    

    return 0;
}
*/

	// Question #2

#include <iostream>
using namespace std;

void bubbleSort(int array[], int n) {
    int temp;
    bool swapped;
    
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        
        for (int j = 0; j < n - 1; j++) {
            if (array[j] > array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                swapped = true;
            }
        }
        
        if (!swapped) {
            cout << "Array is already sorted." << endl;
            exit(0);
            return;
        }
    }
}

int main() {
	
    int n = 9;
    cout << "Enter nine numbers in any order: " << endl;
    int array[n];
    
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    
    bubbleSort(array, n);
    
    cout << "*Sorted Array in Ascending Order*" << endl << endl;
    for (int k = 0; k < n; k++) {
        cout << array[k] << " ";
    }
    
    return 0;
}

