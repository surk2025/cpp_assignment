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
    for(int i=0;i<m;i++){
        int k=0;
        for(int j=m-1;j<n;j++){
            if(i%2!=0){
                int temp=arr[i][k];
                arr[i][k]=arr[i][j];
                arr[i][j]=temp;
            }
        }    
    }
    cout<<"opposite S Matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        } 
    }
    
}