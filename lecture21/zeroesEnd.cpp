#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void zeroEnd(vector<int> & v){

    int n = v.size();

    for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
        if(v[i]==0){
           int temp= v[i];
           v[i]=v[j];
           v[j]= temp;
        }
       }
    }
}

int main(){
    vector<int> v(5);

    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }

    // sort(v.begin(),v.end());
    zeroEnd(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}