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
    cout<<"Input: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }    
    }
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum+=arr[i][j];
        }    
    }
    cout<<"sum: "<<sum;
    
}    