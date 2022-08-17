#include<iostream>
using namespace std;
int main()
{
  int n1,n2,n3;
  cout<<"Enter number 1: ";
  cin>>n1;
  cout<<"Enter number 2: ";
  cin>>n2;
  cout<<"Enter number 3: ";
  cin>>n3;
  if(n1>n2 && n1>n3)
  {
    cout<<"Largest number is amoung these three is "<<n1;
  }
  else if(n2>n1 && n2>n3)
  {
    cout<<"Largest number is amoung these three is "<<n2;
  }
  else
  {
    cout<<"Largest number is amoung these three is "<<n3;
  }
}