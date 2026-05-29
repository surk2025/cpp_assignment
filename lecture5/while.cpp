#include<iostream>
using namespace std;

int main(){
    // using while loop check given number is palindrom or not
    int n;
    cout<<"enter the number : ";
    cin>>n;
    int d,r,s;
    r=0,s=n;
    while(n>0){
        d = n%10;
        r = r*10+d;
        n = n/10;
    }
    if(s==r)
        cout<<r<<" number is palindrom.";
    else
        cout<<r<<" number is not palindrom.";




           



}