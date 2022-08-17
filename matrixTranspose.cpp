#include <iostream>
using namespace std;
int main() 
{
  int matrix[10][10], transpose[10][10], rows, columns, i, j;
  cout<<"How many rows of the matrix: ";
  cin>> rows;
  cout<<"How many columns of the matrix: ";
  cin>>columns;
  for(int i=0;i<rows;i++) 
  {
    for (int j=0;j<columns;j++)
      {
        cout << "Enter element a" << i + 1 << j + 1 << ": ";
         cin >> matrix[i][j];
      }
   }
   cout << "\nEntered Matrix: " << endl;
   for (int i = 0; i < rows; ++i)
     {
      for (int j = 0; j < columns; ++j) 
      {
         cout << " " << matrix[i][j];
         if (j == columns - 1)
            cout << endl;
   }
     }
   for (int i = 0; i < rows; ++i)
      for (int j = 0; j < columns; ++j) 
      {
         transpose[j][i] = matrix[i][j];
      }
   cout << "\nTranspose of Matrix: " << endl;
   for (int i = 0; i < columns; ++i)
      for (int j = 0; j < rows; ++j)
        {
         cout << " " << transpose[i][j];
         if (j == rows - 1)
            cout << endl;
      }
}
