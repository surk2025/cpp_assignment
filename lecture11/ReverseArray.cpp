#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n,i;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    vector<int>v2(v.size());
     for(int i=0;i<v.size();i++){
        int j= v.size()-1-i;
        v2[i]=v[j];
        cout<<v2[i]<<" ";
    }

}