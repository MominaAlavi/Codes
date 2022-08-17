#include <iostream>
using namespace std;
int main() 
{
    int number, term1 = 0, term2 = 1, nextTerm = 0;
    cout << "How many terms to display?: ";
    cin >> number;
    cout << "Fibonacci Series: ";
    for (int i = 1; i <= number; ++i) 
    {
      if(i == 1) 
      {
        cout << term1 << ", ";
      }
      if(i == 2) 
      {
          cout << term2 << ", ";
      }
        nextTerm = term1 + term2;
        term1 = term2;  
        term2 = nextTerm;
        cout << nextTerm << ", ";
    }
    return 0;
  }