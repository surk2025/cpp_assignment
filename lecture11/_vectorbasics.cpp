#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
     for(int i=0;i<n;i++){
        cout<<v[i];
    }

   //.pop_back(); use reduce element of array
   //.at(a)=90; and .sort(v.begin(),v.end())
   



}