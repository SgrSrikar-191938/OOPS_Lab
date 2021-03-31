     #include<iostream>
     #include<cmath>

    using namespace std;

    class Account
  { 
      private:    
   	       float Balance;
	       int branch_code, PIN_code;
	       long long int Mobile_no;
	       string IFSC_code, PAN_no, Cust_name; 
      public:
	       Account()                           //Default constructor
 	   {
	      Balance=0.0;
	   } 
	       Account(string name,long long int mobile,string pan,int br_code,int pin,long long int acno,string ifsc,float bal)        //Prameterized constructor
	  {
      	        Cust_name=name;
        	Mobile_no=mobile;	
		PAN_no=pan;
		branch_code=br_code;
		PIN_code=pin;        
       		IFSC_code=ifsc;
        	Balance=bal;
           }
                                                                 //Using Setter functions
		void setName(string name)
	     {
        	  Cust_name=name;
              }
		void setMobile(long long int mobile)
	     { 
      	         Mobile_no=mobile;
              }
    	        void setbal(int bal)
	     {
                  Balance=bal;
              }
    	        void setBran_code(int br_code)
	     {
		  branch_code=br_code;
	      }
	         void setPIN(int pin)
	     {
	    	  PIN_code=pin;
	      }
	         void setIfsc(string ifsc)
	     {   
		  IFSC_code=ifsc;
	      }
	         void setPAN(string pan)
	     {
		  PAN_no=pan;
	      }
                                                          //Using Getter functions	
	        string getName()
	    {
                 return Cust_name;
             }
               long long int getMobile()
	   {
                 return Mobile_no;
            }
               int getbal()
	  {
                return Balance;
           }
               int getBran_code()
	  {
        	return branch_code;
	   }
	       int getPIN()
	 {
		return PIN_code;
	  }
	       string getIfsc()
	{
		return IFSC_code;
	  } 
	       string getPan()
        {
		 return PAN_no;
	  } 
            int Acc_no();
            int Create_Account();
	    int Deposit();
            int Withdraw();
            float Interest();
            int Display();
   };
           int Account::Acc_no()                     //Function to generate an account number
        {
             cout<<getBran_code();
             cout<<getPIN(); 
             long long int y=getMobile();            //Using Getter functions
	     for(int i=0;i<5;++i)
           {
	       int x=y%10;
	          y=y/10;
	         cout<<x;
	   } 
              return (1);
	 }
           int Account::Create_Account()                 //Function to create an account
        {
             cout<<"Enter the name of the customer : ";
             cin>>Cust_name;
             cout<<"Enter the mobile number of the customer : ";
             cin>>Mobile_no;
             cout<<"Enter the PAN number of the customer : ";
             cin>>PAN_no;
             cout<<"Enter the PIN code : ";
             cin>>PIN_code;
             cout<<"Enter the branch code of the bank : ";
             cin>>branch_code;
             cout<<" The generated account number of the customer is: ";
	     cout<<Acc_no();
	     cout<<endl<<"Enter the IFSC code of the respective bank branch : ";
             cin>>IFSC_code;
	     cout<<"Enter the initial balance in the account : ";
             cin>>Balance;
           return 0;
	}
           int Account::Deposit()                       //Function to deposit the money
        {
              int amount=0;
              cout<<"Enter the amount to deposit: ";
              cin>>amount;
              Balance+=amount;
              cout<<"Your current balance in the account is: "<<Balance<<endl;
            return Balance;
        }
           int Account::Withdraw()                       //Function to withdraw the money
        {
              int amount=0;
              cout<<"The minimum balance to be maintained in the account is 100."<<endl;
              cout<<"Enter the amount to be withdrawn: ";
              cin>>amount;
              if(amount>(Balance-100))
                 cout<<"The withdraw amount is exceeding the balance limit : "<<Balance-100<<endl;
              else
            {
               Balance-=amount;
               cout<<"Your current balance remaining in the account is: "<<Balance<<endl;
               return Balance;	
             }
         }
            float Account::Interest()                       //Function to calculate the compound interest
         {
            float rate,time,CI;
    	    cout<<"Enter interest Rate and Time : ";
	    cin>>rate>>time;
	    CI=Balance*pow((1+rate/100),time) - Balance;
            cout<<"The compound interest obtained on the account balance is : "<<CI<<endl;
	    return CI;
         }
             int Account::Display()                         //Display function
         {
   	         cout<<"The details of the customer are : "<<endl;
   		cout<<"The name of the customer is : "<<getName()<<endl;
   		cout<<"The mobile number of the customer is : "<<getMobile()<<endl;
   		cout<<"The PAN number of the customer is : "<<getPan()<<endl;
   		cout<<"The PIN code is : "<<getPIN()<<endl;
		cout<<"The branch code of the respective branch is : "<<getBran_code()<<endl;
		cout<<"The generated account number of the customer is : ";
	        cout<<Acc_no();
    		cout<<endl<<"The IFSC code of the respective branch is : "<<getIfsc()<<endl;
    		cout<<"The available balance in the account is : "<<getbal()<<endl;
             return 0;
          }

  int main()
{
   	Account Acc;
   	int option;
      do 
    {
        cout<<"\n   Welcome to Banking Management System."<<endl;
        cout<<"1. Create New Account"<<endl;
       	cout<<"2. Deposit the money"<<endl;
       	cout<<"3. Withdraw the money"<<endl;
       	cout<<"4. Diplay Account Details of the customer"<<endl;
       	cout<<"5. Display interest Details"<<endl;
	cout<<"6. Exit"<<endl;
    	cout<<"Select the task to be performed : ";
       	cin>>option;
	      
         switch(option)
       {
            case 1:Acc.Create_Account();
                    break;
            case 2:Acc.Deposit();
                     break;
            case 3:Acc.Withdraw();
                     break;
            case 4:Acc.Display();
                    break;
            case 5: Acc.Interest();
                    break;
            case 6:goto end;
            default:cout<<"The selected option is not valid.";
        }
    }while(1);
     end :
   return 0;
}
   
