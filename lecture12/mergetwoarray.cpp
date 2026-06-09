#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}
vector<int> sort2array(vector<int>& a,vector<int> b){
    int n1 = a.size();
    int n2 = b.size();
    vector<int> res(n1+n2);
    int i=0,j=0,k=0;
    while(i<n1 && j<n2){
        if(a[i]>b[j]){
            res[k]=b[j];
            j++;
            }
        else{
            res[k]=a[i];
            i++;
            }  
            k++;
    }  
    if(i==n2){
        while(j<n2){
            res[k]=b[j];
            k++;
            j++;
        }
    } 
    if(j==n1){
        while(i<n1){
            res[k]=a[i];
            k++;
            i++;
        }
    } 
    return res;
}                      

int main(){
    int n1;
    cout << "Enter size of array A: ";
    cin >> n1;

    vector<int> a;

    for(int i=0;i<n1;i++){
        int q;
        cin >> q;
        a.push_back(q);
    }
    int n2;
    cout << "Enter size of array B: ";
    cin >> n2;

    vector<int> b;

    for(int i=0;i<n2;i++){
        int q;
        cin >> q;
        b.push_back(q);
    }
    display(a);
    display(b);
    vector<int> v = sort2array(a,b);
    display(v);
}
