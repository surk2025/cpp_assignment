#include<iostream>
using namespace std;

int main(){
    // using ternary operator 
    int n;
    cout<<"enter number check divisible by 5 or not : ";
    cin>>n;
    (n%5==0)?cout<<n<<" is divisible by 5.":cout<<n<<" is not divisible by 5.";
       
    return 0;

}