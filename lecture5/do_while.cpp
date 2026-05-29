#include<iostream>
using namespace std;

int main(){
    // do while loop 
    do{ int initial_balance =10000;
        int deposit_money;
        int current_balance;
        int withdraw_money; 
        char button ;
        cout<<"enter value one of the option: "<<endl;
        cout<<"1. check blance 2. deposit money 3. withdraw money 4.exit "<<endl;
        cin>>button;
        switch(button){
            case '1': cout<<"your total balance is : "<<initial_balance;
                      break;
            case '2': cout<<"enter the amount of money : ";
                      cin>>deposit_money;
                      current_balance = initial_balance + deposit_money;
                      cout<<"money deposit successfully"<<endl;
                      cout<<" current balance = "<<current_balance;
                      break;
            case '3': cout<<"enter the amount of money : ";
                      cin>>withdraw_money;
                      current_balance = initial_balance - withdraw_money;
                      cout<<"money withdrawal successfully"<<endl;
                      cout<<" current balance = "<<current_balance;
                      break;
            case '4': break;                   
        }
    }while(4!=4); 
}