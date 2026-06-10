#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
void reverse(int i, int j,vector<int>& v){
    while(i<=j){
     int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
    i++;
    j--;
    }
    return;
    }
void nextPerAny(vector<int>& v){
    int n = v.size();
    for(int i=n-2;i>=0;i--){
    int j=i+1;
    if(v[i]>=v[j]){
        v[i]=v[i];
        v[j]=v[j];
    }
    else{
        reverse((i+1),(n-1),v);
        int temp = v[i];
        v[i]=v[j];
        v[j]= temp;
        break;
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
    nextPerAny(v);
    display(v);
}