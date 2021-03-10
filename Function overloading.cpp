#include<iostream>
#include<cmath>
using namespace std;

 //Function prototypes
double power(double x,int y);                                 
double power(double x);               //Function Overloading

int display(double x,int y);

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
    return pow(x,y);
 	}
//Default case
double power(double x)
{
	return pow(x,2); 
}

int display(double x,int y)
{
	cout<<"The value of "<<x<<"^"<<y <<" is: ";
	cout<<power(x,y);<<endl;
	cout<<"The value of "<<x<<"^"<<2 <<" is: ";
	cout<<power(x);
return 0;	
}

