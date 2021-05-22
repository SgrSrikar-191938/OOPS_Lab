#include<iostream>
using namespace std;

class Time
{
private:
int hours,minutes;
public:
void setHour(int);              //setter functions
void setMinute(int);            
Time(int,int);                 //Parameterized constructor
int getHour();                //Getter functions
int getMinute();
int input();                 //Input function
void display();	 
friend Time Add(Time t1,Time t2);       //Friend function to calculate the sum of time
};
Time::Time(int h=0,int m=0)
{
	hours=h;
	minutes=m;
}
void Time::setHour(int h)
{
	hours=h;
}
void Time::setMinute(int m)
{
	minutes=m;
}
int Time::getHour()
{
	return hours;
}
int Time::getMinute()
{
	return minutes;
}
int Time::input()
{
	cout<<endl<<"Enter the time in hours: ";
	cin>>hours;
	cout<<"Enter the time in minutes: ";
	cin>>minutes;
	return 0;
}
 Time Add(Time t1,Time t2)
{
	Time temp;
	 temp.minutes=t1.minutes+t2.minutes;
    temp.hours= t1.hours+t2.hours + (temp.minutes/60);
    temp.minutes %=60;
    return temp;
}
void Time::display()
{
   cout<<"HH:MM = "<<hours<<":"<<minutes<<endl;
}
int main()
{
	Time t1,t2,t3;
	t1.input();
	t2.setHour(12);
	t2.setMinute(20);
	cout<<endl<<"The two times are: "<<endl;
	cout<<"HH:MM = "<<t1.getHour()<<":"<<t1.getMinute()<<endl;
	t2.display();
	t3=Add(t1,t2);
	cout<<endl<<"The sum of given times is: "<<endl;
     t3.display();
	return 0;
}
