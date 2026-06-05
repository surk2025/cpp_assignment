#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of number: ";
    cin>>n;
    int max[n];
    cout<<"enter the value of number :"; 
    for(int i=0;i<n;i++){
        cin>>max[i];
    }
    int maxium = max[0];
    for(int i=1;i<n;i++){
    if(maxium<max[i]) maxium = max[i];
    } 
    cout<<"maxium value is : "<<maxium;
}