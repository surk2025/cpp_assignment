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
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j){
            arr[i][j]=arr[i][j];
            }
            else{
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }    
    }
    cout<<"trans Array: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }    
        cout<<endl;
    }
}    
