#include<iostream>
using namespace std;

int main(){
    // using if else 
    int x;
    cout<<"enter number check even or odd : ";
    cin>>x;

    if(x%2==0)
       cout<<x<<" is even number.";
    else
       cout<<x<<" is odd number.";

    return 0;
}