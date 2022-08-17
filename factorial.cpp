#include <iostream>
using namespace std;
int main() {
    int number;
    long factorial = 1.0;
    cout << "Enter an integer(positive only): ";
    cin >> number;
    if (number < 0)
        cout << "Enter a positive number only:";
    else 
    {
        for(int i = 1; i <= number; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << number << ": " << factorial;    
    }
}