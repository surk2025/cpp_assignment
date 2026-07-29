#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;


int main(){
    int arr[]={6,9,3,1,9,2,7};

    int n = 7;

    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;
    
    // insertion sort

    for(int i=1;i<n;i++){
        for(int j=i;j>=1;j--){
            if(arr[j]<=arr[j-1]){
               swap(arr[j],arr[j-1]);
            }
        }
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}