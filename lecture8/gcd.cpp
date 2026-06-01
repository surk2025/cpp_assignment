#include<iostream>
using namespace std;

int gcd(int x,int y){
    int hcf=1;
    for(int i=1;i<=min(x,y);i++){
        if(x%i==0&&y%i==0)
        hcf=i;
    }
    return hcf;
}

int main(){
    int x;
    cout<<"enter 1st value: ";
    cin>>x;
    int y;
    cout<<"enter 2nd value: ";
    cin>>y;
    cout<<gcd(x,y);
}