#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void login();
void registr();
void forgot();

int main()
{
        int ch;
        cout<<"\t\t\t***********************************************************************\n\n\n";
        cout<<"\t\t\t                      Welcome to login page                               \n\n";
        cout<<"\t\t\t*******************        MENU        *******************************\n\n";
        cout<<"\t| Press 1 to LOGIN            |"<<endl;
        cout<<"\t| Press 2 to REGISTER         |"<<endl;
        cout<<"\t| Press 3 to FORGOT PASSWORD  |"<<endl;
        cout<<"\t| Press 4 to Exit             |"<<endl;
        cout<<"\nEnter your choice : ";
        cin>>ch;
        cout<<endl;
        switch (ch)
        {
        case 1:
            login();
            break;
        case 2:
            registr();
            break;
        case 3:
            forgot();
            break;
        case 4:
            cout<<"\t\t\t Exiting program. Goodbye! \n\n";
            break;
        
        default:
            system("cls");       // to clear the console screen.
            cout<<" \t\t\t You have made a mistake. Please select from the given options. \n\n\n";
            main();
        }

    return 0;
}

void login(){
    int count = 0;
    string userId, password, id,pass;
    system("cls");
    cout<<"\t\t\t Enter username and password : "<<endl;
    cout<<"\t\t\t USERNAME \n"; 
    cin>>userId;
    cout<<"\t\t\t PASSWORD \n";
    cin>>password;
//  Ifstream in c++ is a file input stream that allows us to read any information contained in the file.
    ifstream input("record.txt");  // input is an object of Ifstream class
    while(input>>id>>pass){        // input reads values from the stream into variables id and pass.
        if(id == userId && pass==password){ 
            count = 1;
            system("cls");
        }
    }
    input.close();
    if(count == 1){
        cout<<userId<<" Your LOGIN is successful. \n Thanks for Logging ! \n\n";
        cin.get();
        main();
    }
    else{
        cout<<"\n LOGIN ERROR \n Please check your Username and Password\n\n";
        main();
    }
}


void registr(){
    string reguserId, password1, password2, rId,rpass,usernameFromFile;
    system("cls");
    cout<<"\t\t\t Enter Username : \n";
    cin>>reguserId;
    ifstream inputFile("record.txt");
    while (inputFile >> usernameFromFile) {
        if (usernameFromFile == reguserId) {
            inputFile.close();
            cout << " Sorry! Username already exists. Please choose a different one.\n" << endl;
            return;
        }
    }
    inputFile.close();

    cout<<"\t\t\t Enter Password(whitespace not consider) : \n";
    cin>> password1;
    cout<<"\t\t\tPlease renter your password: \n";
    cin>> password2;
    //ofstream class describes an output stream. It is used to create files and to write data to files.
    ofstream fout("record.txt", ios::app);  // ios::app is an ios prefix use to open file in append mode
    if(password1==password2){

    fout<<reguserId<<" "<<password2<<endl;
    system("cls");
    cout<<"\t\t\t REGISTRATION SUCCESSFUL !!\n\n";
    }
    else{
        system("cls");
        cout<<"\t\t\t Sorry! Password doesn't match\n\n";
        return;
    }
    }


void forgot(){
    int option;
    system("cls");
    cout<<"\t\t\t Forgot Password ?\n";
    cout<<"Press 1 to search your id by username \n";
    cout<<"Press 2 to go back to the main menu \n";
    cout<<"\t\t\t Enter your choice : ";
    cin>>option;
    switch (option)
    {
    case 1 : {
         int count =0;
         string userId, id, pass;
         cout<<"\n\t\t\t Enter the username which you remembered : ";
         cin>>userId;
         ifstream input2("record.txt");
         while (input2>>id>>pass)
         {
            if(userId==id){
                count =1;
            }
         }
         input2.close();
         if(count==1){
            cout<<"\n\n\nYour Account is found !\n";
            cout<<"Your password is "<<pass<<endl<<endl;
         }
         else{
            cout<<"\n Sorry your account is not found \n ";
            main();
         }

        break;
    }
    case 2 : {
        main();
        break;
    }
    default:
    cout<<"\t\t\t WRONG CHOICE ! Please try again. \n";
    forgot();
        break;
    }
}