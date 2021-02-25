#include<iostream>
using namespace std;
#define MAX 200

  void read_matrix(int a[MAX][MAX],int m,int n);
  void display_matrix(int a[MAX][MAX],int m,int n);	
int main()
{
	int arr[MAX][MAX],row,col;
	cout<<"Enter the number of rows and columns in the matrix : ";
	cin>>row>>col;
	read_matrix(arr,row,col);                  
	cout<<"The Entered Matrix is: "<<endl;
	display_matrix(arr,row,col);
	return 0;
}
//Function to read the input values for a 'm x n' matrix from the user
void read_matrix(int a[MAX][MAX],int m,int n)
{
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
				cout<<"A["<<i<<"]["<<j<<"]: ";
			cin>>a[i][j];
		}
	}
}
//Function to display the entered 'm x n' matrix by the user
void display_matrix(int a[MAX][MAX],int m,int n)
{
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
	          cout<<" "<<a[i][j];
              		
	 
	 }
	 cout<<endl;
	}
}

