#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class Bank{
    private:
    long int balance , amount , acc_no;
    char name[50] , add[100] , type[20];
    public:
   void menu();
   void open_acc();
   void deposite_money();
   void withdraw_money();
   void display_acc();
   void view_balance(); 
   void update_acc();
};
void Bank:: menu(){
        int n;
        
        cout<<"\n\t\t\t *** APNA SAPNA MONEY MONEY ***";
         cout<<"\n\n\t\t\t **WELCOME TO OUR BANK** ";
         do{
          cout<<"\n\n\t\t\t Please select one option. ";
        cout<<"\n\t\t\t 1. Create Account. ";
        cout<<"\n\t\t\t 2. Deposit Money";
        cout<<"\n\t\t\t 3. Withdraw Money";
        cout<<"\n\t\t\t 4. Balance Enquiry ";
        cout<<"\n\t\t\t 5. Display Account Details";
        cout<<"\n\t\t\t 6. Update An Account ";
        cout<<"\n\t\t\t 7. Exit";
        cout<<"\n\t\t\t";
        cin>>n;
        switch(n){
        case 1 : open_acc();
        break;
        case 2 : deposite_money();
        break;
        case 3 : withdraw_money();
        break;
        case 4 : view_balance();
        break;
        case 5 : display_acc();
        break;
        case 6 : update_acc();
        break;
        case 7 : exit(0);
        break;
        default :
        cout<<"\nInvalid choice";
         }
         }
         while (n!=7);
    }
    void Bank::open_acc(){
        system("cls");
        cout<<"\nEnter the Account Number : ";
        cin>>acc_no;
        cout<<"\nEnter your full name : ";
        cin.ignore();
        cin.getline(name,50);
        cout<<"\nEnter your address : ";
        cin.ignore();
        cin.getline(add,100);
        cout<<"\nWhat type of account you want to open : ";
        cin>>type;
        cout<<"\nEnter amount for deposite : ";
        cin>>balance;
        cout<<"\n YOUR ACCOUNT IS CREATED";
    }
    //To display the details of the account
    void Bank ::display_acc()       
    {
        
        cout<<"\n Account number : "<<acc_no;
        cout<<"\n Account Holder Name : "<<name;
        cout<<"\n Account Holder Address : "<<add;
        cout <<"\n Type of Account : "<<type;
        cout<<"\n Your Current Balance is : "<<balance;
    }
    void Bank::deposite_money(){
        int amt;
        cout<<"\nEnter the ammount that you want to deposit : ";
        cin>>amt;
        balance = balance + amt;
        cout<<"\nThankyou the amount has been deposited";
    }
    void Bank::withdraw_money(){

        int amt;
        cout<<"\nEnter the amount that you want to withdraw : ";
        cin>>amt;
        if(amt <= balance){
            balance = balance - amt;
            cout<<"\nAmount Withdrawn !! Your Current Balance is :  "<<balance;
        }
        else{
            cout<<"\nThe entered amount "<<amt<<" is not prersent in your account.";
            cout<<"\nYour account balance is :"<<balance;
        }
    }
    void Bank::view_balance(){
        int n;
        cout<<"\nYour Current Account Balance is : "<<balance;
    }
    void Bank::update_acc(){
        cout<<"\nAccout Number : "<<acc_no;
        cout<<"\nUpdate Account Holder name : ";
        cin.ignore();
        cin.getline(name,50);
        cout<<"\nUpdate Account Holder Address : ";
        cin.ignore();
        cin.getline(add,100);
        cout<<"\nUpdate Account Type : ";
        cin>>type;
        cout<<"Updated Deposite Amount : ";
        cin>>balance;
    }


int main(){
    Bank obj;
    obj.menu();
    getch();
    return 0;
}