#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter row: ";
    cin>>n;
    int m;
    cout<<"enter coloum: ";
    cin>>m;
    int arr[m][n];
    cout<<"Input: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }    
    }
    
    cout<<"Spiral Matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        } 
    }
}
