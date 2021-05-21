#include<iostream>
#include<cstdlib>
using namespace std;

class String{
	public:
	char str1[50];
	void setString(char[]);      //Setter
	void storeString(char[]);    //Function to store the strings
    int String_length(char[]);      //Function to find the length of the given string
	int concat_string(char[],char[]);   //Function to concatenate the two strings
	int equate_string(char[],char[]);    //Function to compare and check the equality of two strings
    int reverse_string(char[]);         //Function to reverse the given string
	void display();                  //Display function
};

void String::setString(char str[])
{
	for(int i=0;i<50;i++)
	   str1[i]=str[i];
}

void String::storeString(char str[])
{
	cout<<"Enter the string: ";
	cin.getline(str,50);
}

int String::String_length(char str1[])
{
	int len = 0, i;
   for (i = 0; str1[i] != '\0'; i++) 
 {
    len++;
 }
 return len;
}

 int String::concat_string(char str1[],char str2[])
{
	int i, len1, len2;
    len1 = String_length(str1);
    len2 = String_length(str2);
   for (i = len1; i < len1 + len2; i++)
  {
    str1[i] = str2[i - len1];
  }
    str1[i] = '\0';                                   //adding null character at the end of input
  return 0; 
}

 int String::equate_string(char str1[],char str2[])
{
   int len1, len2, i, count = 0;
   len1 = String_length(str1);
   len2 = String_length(str2);
  if (len1 != len2)
   return 1;
  for (i = 0; i < len1; i++) 
  {
    if (str1[i] == str2[i])
    count++;
  }
 if (count == len1)
 {
   cout<<"The given two strings are equal.";
   return 0;
 }
  else
 {
   cout<<"The given two strings are not equal.";
   return 1;
 }
 
}

 int String::reverse_string(char str1[])
{
   int i,len;
   while(str1[i]!='\0')
  {
    len=len+1;
    i++ ;
  }
   
   for(i=len-1;i>=0;i--)
  {
     cout<<str1[i];
  }
 return 0;
}

 void String::display()
{
	cout<<str1;
}

 int main()
{
   String s1,s2,s3;
	int choice;
   s1.setString("Architecture");
   s2.storeString(s2.str1);
  cout<<endl<<"The given string 1 is: ";
  s1.display();
  cout<<endl<<"The given string 2 is: ";
  s2.display();
  while(1)
 {
 	cout<<endl<<"---------------------------------------------------------------------";
   cout<<endl<<"1. Find Length "<<endl<<"2. Concatenate "<<endl<<"3. Compare "<<endl<<"4.Reverse "<<endl<<"5. Exit"<<endl;
   cout<<"Enter your choice: ";
   cin>> choice;

     switch (choice)
   {
     case 1:
		cout<<"The length of the string 1 is: "<<s1.String_length(s1.str1);
        cout<<endl<<"The length of the string 2 is: "<<s2.String_length(s2.str1);
		break;
    case 2:
        s1.concat_string(s1.str1,s2.str1);  
	   cout<<"The concatenated string is: ";
	   s1.display();
	    break;
    case 3:
		s1.equate_string(s1.str1,s2.str1);
		break;
	case 4:
		cout<<"The given string is: ";
		s2.display();
		cout<<endl<<"The reverse of the string 1 is: ";
		s1.reverse_string(s1.str1);
		cout<<endl<<"The reverse of the string 2 is: ";
		s2.reverse_string(s2.str1);
	    break;
	 case 5:
		exit(0);
	}
 }
  return 0;
}
