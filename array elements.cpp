#include <iostream> 
using namespace std;

int main() {
    
    int numbers[] = {1, 2, 3, 4, 5};
    int arraySize = sizeof(numbers) / sizeof(numbers[0]);

   cout << "Elements of the array: " << endl;

    for (int i = 0; i < arraySize; ++i) {
      
       cout << numbers[i] << " ";
    }

  cout << endl;  

    return 0; 
}
