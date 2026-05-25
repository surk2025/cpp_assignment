#include<iostream>

using namespace std;

int main(){

    // data types and variable >> comment 
    
    // int data type

    int x; //initialisation by input 
    x = 9;
    cout<<"the value of x = ";
    cout<<x<<endl;
    
    int y; // intitialisation by output
    cout<<"enter value of y ";
    cin>>y;
    cout<<"y = "<<y<<endl;
    
    // float data type
    
    float z;
    cout<<"enter float value of z ";
    cin>>z;
    cout<<"z = "<<z<<endl;

    // boolean data type

    bool flag;
    flag = x>y;
    cout<<"return boolean function condition is x>Y";
    cout<<"="<<flag<<endl;
    
    // char data type

    char name = 's';
    cout<<name<<endl;
    
    // string data type 

    string goodboy = "satya is good boy";
    cout<<goodboy<<endl;

    string say;
    cout<<"say about satya:"<<endl;
    cin>>say;
    cout<<say;
}