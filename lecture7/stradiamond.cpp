#include<iostream>
using namespace std;

int main(){
    // print star diamond pattern
    int row;
    cout<<"enter the value rows :";
    cin>>row;
    int nst=1;
    int nsp=row-1;
    for(int i=1;i<=2*row-1;i++){
        // for spaces
        for(int j=1;j<=nsp;j++){
                cout<<" ";    
        }
        if(i<=row-1) nsp--;
        else nsp++;
        // for stars
        for(int k=1;k<=nst;k++){
                cout<<"*";
        }
            if(i<=row-1) nst+=2;
        else nst-=2;
            cout<<endl;
    }
}