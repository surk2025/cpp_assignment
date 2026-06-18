#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    int n;
    cout<<"enter size of array :"<<endl;
    cin>>n;
    vector<int> v2(n);
    cout<<"enter element :"<<endl;
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }

    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
}