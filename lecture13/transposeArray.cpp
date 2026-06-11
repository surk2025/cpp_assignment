#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter row: ";
    cin>>n;
    int m;
    cout<<"enter coloum: ";
    cin>>m;
    int arr[n][m];
    cout<<"Input: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }    
    }
    int trans[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            trans[i][j]=arr[j][i];
        }    
    }
    cout<<"trans Array: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<trans[i][j]<<" ";
        }    
        cout<<endl;
    }
    
}    