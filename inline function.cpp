//C++ program to calculate the power of a number using inline function.
 
 #include<iostream>
 #include<cmath>
 using namespace std;

    inline double power(double x,double y)           //inline function
  { 
     return pow(x,y);                     
  }                 
 
    double display(double x,double y) 
  {

	cout<<endl<<"The value of "<<x<<" ^ "<<y<<" is : ";
     	cout<<power(x,y)<<endl;
         return 0;	
  }

     int main()
  {
	double m,n;
	cout<<"Enter the value for base : ";
	cin>>m;
    cout<<endl<<"Enter the value for exponent : ";
     cin>>n;
     display(m,n);
	return 0;
  }


