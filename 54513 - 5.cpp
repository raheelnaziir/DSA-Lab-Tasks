
	 //Question #1
#include <iostream>
using namespace std;

int n;

int binarySearch(int array[], int target) {
    
    int low = 0;    // lower bound
    int high = n-1; // higher bound
    
    while(low <= high) {
        
        int middle =  (high + low) / 2;  // dividing into halves
        
        cout <<"middle: " << middle <<endl;
        
        int value = array[middle];
        
        if(value > target) 
            high = middle - 1;
        else if(value < target)
            low = middle + 1;
        else
            return middle; // if value is equal return mid 
            	
    }
    
    return -1;
}

int main() {

    cout <<"Enter Array Size: " ;
    cin>>n;
    
    int array[n];
    int target;
    
    for(int i=0; i<n;i++) {
        cin>>array[i];
    }
    
    
    cout << "Enter Target: " ;
    cin>>target;
    
    int index = binarySearch(array, target);
    
    if(index != -1) {
        cout <<"Target found at index: " << index << endl;
    } else{
        cout << target <<" not found" <<endl;
    }

    return 0;
}


 
	 // Question #2
/*	
#include <iostream>

using namespace std;

int n = 9;

int firstOccurrence(int array[], int target) {
    int low = 0, 
	high = n - 1;
    int result = -1;  
    
    while (low <= high) {
        int mid =  (high + low) / 2;
	
		int value = array[mid];
		
        if (value == target) {
            result = mid;  
            high = mid - 1;  // mov to the left half to find first occurence
        }
        else if (value > target) {
            high = mid - 1;  
        }
        else {
            low = mid + 1;  
        }
    }

    return result;  
}

int main() {
    int array[n] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int target = 3;

    int index = firstOccurrence(array, target);

    if (index != -1)
        cout << "First occurrence of " << target << " is at index: " << index << endl;
    else
        cout << "Target not found in the array" << endl;

    return 0;
}
*/

	 
			 
	 // Question #3
/*
#include <iostream>

using namespace std;

int n = 9;

int lastOccurrence(int array[], int target) {
    
    int low = 0, 
	high = n - 1;
    int result = -1;  
    
    while (low <= high) {
        int mid =  (high + low) / 2;
	
		int value = array[mid];
		
        if (value == target) {
            result = mid;  
            low = mid + 1;  // mov to the right half to find last occurence
        }
        else if (value > target) {
            high = mid - 1;  
        }
        else {
            low = mid + 1;  
        }
    }

    return result;  // return mid 
}



int main() {
    int array[n] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int target = 3;

    int index = lastOccurrence(array, target);

    if (index != -1)
        cout << "Last occurrence of " << target << " is at index: " << index << endl;
    else 
        cout << "Target not found in the array" << endl;

    return 0;
}
*/

	
/*	
	// Question #4
	
	
#include <iostream>
using namespace std;


int main() {
	
	int n = 9;
	int counter = 0;
    int array[n] = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    int target;
    int c = 0;

	cout <<"Enter target value: ";
	cin>>target;
	
    for(int i=0; i<n; i++) {
    	if(array[i] == target) {
    		c = 1;
    		counter++;
		} 
	}
	
	if(c ==1 )
		cout <<"Total Occurrences of target " << target << " in array: " <<counter <<endl;
    else {
			cout <<"Target not found in array" <<endl;
		}

    return 0;
}
*/
