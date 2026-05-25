#include<iostream>
using namespace std;

int main(){
    // increment and decrement oprator 
    int x;
    cout<<"enter value x = ";
    cin>>x;
    cout<<"increment x++ = "<<(x++); //post increment
    cout<<"\nincrement ++x = "<<(++x); //pre increment
    cout<<"\ndcrement x-- = "<<(x--); //post decrement
    cout<<"\ndcrement --x = "<<(--x); //pre decrement 
    
    // using modulus oprator
    int a;
    cout<<"\nenter the value a = ";
    cin>>a;
    cout<<"\na%2 = "<<(a%2)<<endl;
    return 0;
}