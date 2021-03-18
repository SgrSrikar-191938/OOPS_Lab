//C++ program to calculate the power of a number using inline function.
 #include<iostream>
 using namespace std;

  inline double power(double x,double y)                 //inline function
 {
	double res=1;
	 while(y!=0)
	{
		res=res*x;
		y--;
	}
     return res;
 }

    double display(double x,double y)                     //display function
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


