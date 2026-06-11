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
    cout<<"Input A: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }    
    }
     int brr[m][n];
    cout<<"Input B: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>brr[i][j];
        }    
    }
    int sum[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum[i][j]=arr[i][j]+brr[i][j];
        }    
    }
    cout<<"Sum of element A + B: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<sum[i][j]<<" ";
        }   
        cout<<endl; 
    }
   
    
}    