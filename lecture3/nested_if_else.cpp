#include<iostream>
using namespace std;

int main(){
    // using nested if else 
    int y;
    cout<<"enter a number is divisible by 3 and 5 :";
    cin>>y;
    if(y%3==0){
        if(y%5==0)
            cout<<y<<" is divisible by 3 and 5."<<endl;
        else 
            cout<<y<<" is divisible by 3 but not 5."<<endl;    
    }
    if(y%5==0){
        if(y%3==0)
            cout<<y<<" is divisible by 3 and 5."<<endl;
        else
            cout<<y<<" is divisible by 5 but not 3."<<endl;
    }
    if(y%5==0 && y%3==0)
        cout<<y<<" is divisible by 5 and 3."<<endl;
    else
        cout<<y<<" is not divisible by 5 and 3."<<endl;    

}