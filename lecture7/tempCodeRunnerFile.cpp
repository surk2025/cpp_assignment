#include<iostream>
using namespace std;

int main(){
    // print star rohmbus pattern
    int row;
    cout<<"enter the value rows :";
    cin>>row;
    for(int i=1;i<=row;i++){
        // for spaces
        for(int j=1;j<=row-i;j++){
                cout<<" ";    
        }
        // for stars
        for(int k=1;k<=row;k++){
                cout<<"*";
        }
            cout<<endl;
    }
}