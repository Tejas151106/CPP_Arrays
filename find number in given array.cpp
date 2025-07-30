#include <iostream>
#include <limits>   
using namespace std;

int main() {
 
    int numbers[] = {1, 2, 3, 4, 5, 8, 12, 15, 20};  
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Elements of the array: " << endl;


    for (int i = 0; i < arraySize; ++i) {
      
        cout << numbers[i] << " ";
    }

    cout << endl << endl;  

    int searchNumber;
    cout << "Enter a number to search in the array: ";
    cin >> searchNumber;


    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    bool found = false; 
    int foundIndex = -1; 

    
    for (int i = 0; i < arraySize; ++i) {
        if (numbers[i] == searchNumber) {
            found = true;    
            foundIndex = i; 
            break;           
        }
    }

    if (found) {
        cout << "Number " << searchNumber << " found at index " << foundIndex << "." << endl;
    } else {
        cout << "Number " << searchNumber << " not found in the array." << endl;
    }

    return 0; 
}
