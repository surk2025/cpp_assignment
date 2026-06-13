#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter 1st matrix row: ";
    cin>>m;
    int n;
    cout<<"enter 2nd matrix coloum: ";
    cin>>n;
    int arr[m][n];
    cout<<"Input A: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }    
    }
    int brr[n][m];
    cout<<"Input B: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>brr[i][j];
        }    
    }
    int prod[m][m];
    for(int k=0;k<m;k++){
        for(int i=0;i<m;i++){
            prod[k][i]=0;
            for(int j=0;j<n;j++){
                prod[k][i]+=arr[k][j]*brr[j][i];
            }    
        }
    }
    cout<<"resultant: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<prod[i][j]<<" ";
        } 
        cout<<endl;   
    }
    
}    