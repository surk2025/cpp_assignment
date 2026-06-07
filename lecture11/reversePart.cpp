#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
void change(int i, int j,vector<int>& v){
    while(i<=j){
     int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
    }
    return;
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
    n= v.size();
    int k;
    cout<<"enter the value steps to rotate: ";
    cin>>k;
    change(0,n-k-1,v);
    change(n-k,n-1,v);
    change(0,n-1,v);
    display(v);

    
    
}