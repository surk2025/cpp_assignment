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
    for(int i=0;i<n;i++){
        if(arr[i][0]==0){
           for(int j=0;j<s;j++){
            arr[i][j]=1-arr[i][j];
            }
        }
    }
    for(int j=0;j<s;j++){ 
    int zero=0;
    int ones=0;
    for(int i=0;i<n;i++){
        if(arr[i][j]==0) zero++;
        else ones++; 
    }  
    for(int i=0;i<n;i++){
        if(zero>ones){
            if(arr[i][j]==0) arr[i][j]=1;
            else arr[i][j]=0;
        }    
    }
}
    int sum=0;
    for(int i=0;i<n;i++){
        int x=1;
        for(int j=s-1;j>=0;j--){
            sum+=arr[i][j]*x;
            x*=2;
        }
    } 
    cout<<"max score :"<<sum;
}   