#include<iostream>
using namespace std;

class Shape                  // abstract base class
{
  public:
	  virtual int NumberOfSides() = 0;       //Pure Virtual Function
};

 class Triangle:public Shape
 {   
   public:
		 int NumberOfSides()
		{
		   cout<<"Number of sides in a Triangle are : 3 ";
           return 0;
   		}	
 };
 class Trapezoid:public Shape
{
  public:
	    int NumberOfSides()
	 {
	    cout<<endl<<"Number of sides in a Trapezoid are : 4 ";
	    return 0;
	 }			
};
      class Hexagon:public Shape
 {
	public:
		  int NumberOfSides()
		{
			cout<<endl<<"Number of sides in a Hexagon are: 6 ";
        	return 0;
		}
 };
    
   int main()        //Main function
 {
   Shape  *s;        
   Triangle t;
   Trapezoid td;
   Hexagon h;
   s=&t;
   s->NumberOfSides();
   s=&td;
   s->NumberOfSides();
   s=&h;
   s->NumberOfSides();
   return 0;
 }
