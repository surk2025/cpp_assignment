#include<iostream>
using namespace std;

int main(){
    // print star square pattern
    int square;
    cout<<"enter the value of side of square :";
    cin>>square;
    for(int i=1;i<=square;i++){
        for(int j=1;j<=square;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}