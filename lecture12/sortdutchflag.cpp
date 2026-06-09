#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void sort012(vector<int>& v){
    int n = v.size();
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(v[mid]==0){
        swap(v[low],v[mid]); 
            low++;
            mid++;   
        }
        else if(v[mid]==1) mid++;
        else{
            swap(v[mid],v[high]); 
            high--; 
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
    sort012(v);
    display(v);
}