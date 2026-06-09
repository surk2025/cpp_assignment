#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void sortarray(vector<int>& v){
    int n = v.size();
    for(int i=0;i<n;i++){
        for(int j=n-1;j>0+i;j--){
            if(v[i]>v[j]){
                int temp = v[i];
                v[i] = v[j];
                v[j] = temp;
            }
            if(v[i]<=v[j]){
                v[i] = v[i];
                v[j] = v[j];
            }
        }
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
    display(v);
    sortarray(v);
    display(v);
}