#include <iostream> 
#include <numeric>  
#include <vector>  

using namespace std;

int main() {
   
    vector<int> numbers = {10, 20, 30, 40, 50, 60};
    int n = numbers.size(); 

    long long sum = 0; 


    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
    }

   
    double average = static_cast<double>(sum) / n;


    cout << "Array elements: ";
    for (int i = 0; i < n; ++i) {
        cout << numbers[i] << (i == n - 1 ? "" : ", ");
    }
    cout << endl;

    cout << "Sum of array elements: " << sum << endl;
    cout << "Average of array elements: " << average << endl;

    return 0; 
}
