#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter: ";
    cin>>m;
    int arr[m][m];
    cout<<"Input: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }    
    }
    int j;
    for(int i=0;i<m;i++){
        int k=0;
        int j=m-1;
        while(k<j){
        int temp=arr[i][k];
        arr[i][k]=arr[i][j];
        arr[i][j]=temp;
        k++;
        j--;
        }
    }
  
    cout<<"rotate 90 Array: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }    
        cout<<endl;
    }  
}    
