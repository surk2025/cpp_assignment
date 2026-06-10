#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void nextpermutation(vector<int>& v){
    int n = v.size();
    int i=0,j=1,k=2;
    if(v[j]<v[k]){
        v[i]=v[i];
        int temp = v[j];
        v[j] = v[k];
        v[k] = temp;
    }
    else if(v[j]>v[i]&&v[i]>v[k]){
        int temp = v[j];
        v[j] = v[k];
        v[k] = v[i];
        v[i] = temp;
    }
    else{
        int temp = v[k];
        v[k] = v[j];
        v[j] = v[i];
        v[i] = temp;
    }
    return;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int q;
        cin >> q;
        v.push_back(q);
    }
    nextpermutation(v);
    display(v);
}