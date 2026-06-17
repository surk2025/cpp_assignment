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
    int start = 0;
    int end = m-1;

    while(start < end){
        int temp = arr[start][i];
        arr[start][i] = arr[end][i];
        arr[end][i] = temp;

        start++;
        end--;
        }
    }   
    for(int i=0;i<m;i++){
        int start=0;
        int end=m-1;
        if(i==1){
            int temp = arr[start][i];
            arr[start][i] = arr[end][i];
            arr[end][i] = temp;
        }

    }
    cout<<"clock-wise wave matrix: "<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[j][i]<<" ";
        }    
    }  
}