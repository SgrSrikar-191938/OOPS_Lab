#include<iostream>
using namespace std;

class Shape                  // abstract base class
{
  protected:
	 int val;
  public:
	 void setVal(int i)          //Setter Function
	{
		val=i;
	}
	  int getVal()               //Getter Function
	{
		return val;
	}
	  virtual int NumberOfSides() = 0;       //Pure Virtual Function
};

 class Triangle:public Shape
 {   
   public:
		 int NumberOfSides()
		{
		   cout<<"Number of sides in a Triangle are : ";
		   cout<<getVal();
           return 0;
   		}	
 };
 class Trapezoid:public Shape
{
  public:
	    int NumberOfSides()
	 {
	    cout<<endl<<"Number of sides in a Trapezoid are : ";
		cout<<getVal();
	    return 0;
	 }			
};
      class Hexagon:public Shape
 {
	public:
		  int NumberOfSides()
		{
			cout<<endl<<"Number of sides in a Hexagon are: ";
			cout<<getVal();
        	return 0;
		}
 };
    
   int main()        //Main function
 {
   Shape  *s;        
   Triangle t;
   Trapezoid td;
   Hexagon h;
   t.setVal(3);
   td.setVal(4);
   h.setVal(6);
   s=&t;
   s->NumberOfSides();
   s=&td;
   s->NumberOfSides();
   s=&h;
   s->NumberOfSides();
   return 0;
 }
