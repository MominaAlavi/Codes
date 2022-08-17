#include <iostream>
#include <string>
using namespace std;
int main()
{
  string string1, string2;
  cout << "Enter string1: ";
  getline (cin, string1);
  string2 = string1;
  cout<<endl;
  cout << "string 1 is: "<< string1 << endl;
  cout << "string 2 is: "<< string2;
}