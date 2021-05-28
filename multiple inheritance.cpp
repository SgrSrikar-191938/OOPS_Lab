#include<iostream>
using namespace std;

class length
{
  public:
  double len;
  void setlength()
 {
 	cout << "Enter the value of length: ";
	cin >>len;
 } 	
   double getLen()    //Getter function
  {
    return len;
  }
};
class breadth
{
  public:
  double bd;  
  void setbreadth()
 {
   cout<<"Enter the value of breadth: ";
   cin >> bd;
 }
   double getBreadth()    //Getter function
  {
 	return bd;
  }
};
class Area : public length, public breadth   //Area class is derived from class length and class breadth
{
  public:
    double ar;
   void find_area()  //Function to calculate the area
  {
 	ar=len*bd;
  }
   double getArea()
  {
 	return ar;
  }
   int display()    //Display function
  {
	cout<<endl<<"The given value for length is: ";
	cout<<getLen();
	cout<<endl<<"The given value for breadth is: ";
 	cout<<getBreadth();
 	cout<<endl<<"The area of the given reactangle is: ";
	cout<<getArea();
	return 0;
  }
};

 int main()
{ 
   Area a;    //object of derived class area
   a.setlength();
   a.setbreadth();
   a.find_area();
   a.display();
   return 0;
}
