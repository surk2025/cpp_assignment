#include<iostream>
using namespace std;

int main(){
    int m;
    cout<<"enter row of square matrix: ";
    cin>>m;
    int arr[m][m];
    cout<<"Input: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }    
    }
    int i=0,j=0;
    cout<<"resultant Array: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
        if((i+j)%2==0){
            cout<<arr[i][j]<<" ";
        }
        else{
            cout<<" ";
        }
    }
    cout<<endl;
}
}    
