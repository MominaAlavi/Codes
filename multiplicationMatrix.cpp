#include <iostream>
using namespace std;
void input(int firstMatrix[][10], int secondMatrix[][10], int row1, int column1, int row2, int column2);
void multiplication(int firstMatrix[][10], int secondMatrix[][10], int Result[][10], int row1, int column1, int row2, int column2);
void display(int multiply[][10], int row1, int column2);
int main()
{
	int firstMatrix[10][10], 
  secondMatrix[10][10], 
  multiply[10][10], 
  row1, column1,row2, column2, i, j, k;
	cout << "How many rows of first matrix: ";
	cin >> row1;
  cout<<"How many columns of first matrix: ";
  cin>> column1;
	cout << "How many rows of second matrix: ";
	cin >> row2;
  cout<<"How many columns of second matrix: ";
  cin>> column2;
	while (column1!=row2)
	{
		cout << "Invalid insertion! Enter number of rows and column for first matrix: ";
		cout<<"Number of rows in first matrix: ";
    cin>>row1; 
    cout<<"Number of columns in first matrix: ";
    cin>>column1;
		cout<<"Number of rows in second matrix: ";
		cin>> row2;
    cout<<"Number of columns in second matrix: ";
    cin>> column2;
	}
  input(firstMatrix, secondMatrix, row1, column1, row2, column2);
  multiplication(firstMatrix, secondMatrix, multiply, row1, column1, row2, column2);
  display(multiply, row1, column2);
	return 0;
}
void input(int firstMatrix[][10], int secondMatrix[][10], int row1, int column1, int row2, int column2)
{
	int i, j;
	cout << endl << "Enter elements of matrix 1:" << endl;
	for(i = 0; i < row1; ++i)
	{
		for(j = 0; j < column1; ++j)
		{
			cout << "Enter elements a"<< i + 1 << j + 1 << ": ";
			cin >> firstMatrix[i][j];
		}
	}
	cout << endl << "Enter elements of matrix 2:" << endl;
	for(i = 0; i < row2; ++i)
	{
		for(j = 0; j < column2; ++j)
		{
			cout << "Enter elements b" << i + 1 << j + 1 << ": ";
			cin >> secondMatrix[i][j];
		}
	}
  cout<<endl;
}
void multiplication(int firstMatrix[][10], int secondMatrix[][10], int multiply[][10], int row1, int column1, int row2, int column2)
{
	int i, j, k;
	for(i = 0; i < row1; ++i)
	{
		for(j = 0; j < column2; ++j)
		{
			multiply[i][j] = 0;
		}
	}
	for(i = 0; i < row1; ++i)
	{
		for(j = 0; j < column2; ++j)
		{
			for(k=0; k<column1; ++k)
			{
				multiply[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
			}
		}
	}
}
void display(int multiply[][10], int row1, int column2)
{
	int i, j;
  cout<<"Multiplied matrix is:"<<endl;
	for(i = 0; i < row1; ++i)
	{
		for(j = 0; j < column2; ++j)
		{
			cout << multiply[i][j] << " ";
			if(j == column2 - 1)
				cout << endl;
		}
	}
}