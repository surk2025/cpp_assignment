#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sort(vector<int> & v){

    int n = v.size();

    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        if(v[i]>v[j]){
           int temp= v[i];
           v[i]=v[j];
           v[j]= temp;
        }
       }
    }
}

int main(){
    vector<int> v(5);

    for(int i=0;i<5;i++){
        cin>>v[i];
    }

    // sort(v.begin(),v.end());
    sort(v);

    for(int i=0;i<5;i++){
        cout<<v[i]<<" ";
    }
}