#include<iostream>
using namespace std;

int main(){
    // print star reverse triangle pattern
    int row;
    cout<<"enter the value rows :";
    cin>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row+1-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}