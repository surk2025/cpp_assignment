#include<iostream>
using namespace std;

int main(){
    // print star rectangle pattern
    int row,col;
    cout<<"enter the value rows :";
    cin>>row;
    cout<<"enter the value coloums :";
    cin>>col;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}