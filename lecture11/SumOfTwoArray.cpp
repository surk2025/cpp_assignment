#include<iostream>
using namespace std;

int main(){

    int n,i;
    cout<<"enter size of array: ";
    cin>>n;
    int a[n];
    cout<<"enter the value of 1st array : ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum = 0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    cout<<"sum of the element of array : "<<sum;


}

