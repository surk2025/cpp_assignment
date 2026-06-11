#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the number of student: ";
    cin>>n;
    int m;
    cout<<"enter the number of list :";
    cin>>m;
    int arr[m][n];
    cout<<"Input rollno. and marks: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }    
    }
    cout<<"Result:"<<endl;
    cout<<"rollno.: ";
    for(int i=0;i<m;i++){
        if(i==1) cout<<"marks: ";
        for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 

    
}