#include<iostream>
using namespace std;

double power(double x,int y=2);
double display(double x,int y=2);

int main()
{
	double m;
	int n;
	cout<<"Enter the values for base and exponent: ";
	cin>>m>>n;
	display(m,n);
	return 0;
}
double power(double x,int y)
{
	double res=1;
	while(y!=0)
	{
		res=res*x;
		y--;
	}
 return res;
}
double display(double x,int y)
{
	cout<<"The value for "<<x<<" ^ "<<y<<" is: ";
	cout<<power(x,y)<<endl;
	cout<<"The square of the given number is :";
	cout<<power(x);
return 0;	
}

