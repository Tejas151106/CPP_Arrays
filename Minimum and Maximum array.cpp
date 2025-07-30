#include <iostream> 

using namespace std;

int main() {
   
    int numbers[] = {10, 20, 30, 40, 50};
    int n = 5; 

    long long sum = 0;
    int min_val = numbers[0]; 
    int max_val = numbers[0]; 


    for (int i = 0; i < n; ++i) {
        sum += numbers[i]; 

        if (numbers[i] < min_val) {
            min_val = numbers[i]; 
        }

        if (numbers[i] > max_val) {
            max_val = numbers[i];  
        }
    }


    double average = static_cast<double>(sum) / n;

  
    cout << "Array elements: ";
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << (i == n - 1 ? "" : ", ");
    }
    cout << endl;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Minimum: " << min_val << endl;
    cout << "Maximum: " << max_val << endl;

    return 0; 
}
