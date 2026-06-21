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
    cout<<"Input: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<s;j++){
            cin>>arr[i][j];
        }    
    }
    cout<<"enter target find"<<endl;
    // row ascending 
    for(int i=0;i<n;i++){
       for(int k=0;k<s;k++){
        for(int j=s-1;j>k;j--){
        if(arr[i][j]>arr[i][k]){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
        }
    }
    }
}
    // coloums ascending
 for(int i=0;i<s;i++){
       for(int k=0;k<n;k++){
        for(int j=n-1;j>k;j--){
        if(arr[j][i]<arr[k][i]){
            int temp=arr[j][i];
            arr[j][i]=arr[k][i];
            arr[k][i]=temp;
        }
    }
    }
}
int i=0;
int j=s-1;
while(i<=n-1 && j>=0){
    for(int i=0;i<n){
        int j=s-1;
        if(arr[i][j]==taget) cout<<arr[i][j];
        else if(arr[i][j]>target) j--;
        else i++;
    }    
}


 