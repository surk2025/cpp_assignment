#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter row: ";
    cin>>n;
    int s;
    cout<<"enter coloum: ";
    cin>>s;
    int arr[n][s];
    cout<<"Input: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<s;j++){
            cin>>arr[i][j];
        }    
    }
    int sum=0;
    int x=1;
    int sumn=0;
    for(int i=0;i<n;i++){
        for(int j=s-1;j>=0;j--){
            sum+=arr[i][j]*x;
            x*=2;
        }
        sumn+=sum;    
    }
    cout<<"max score :"<<sumn;
}   