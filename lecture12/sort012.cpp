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
    int zero = 0, ones = 0, two = 0;

    for(int i=0;i<n;i++){
        if(v[i]==0) zero++;
        else if(v[i]==1) ones++;
        else two++;
    }

    for(int i=0;i<n;i++){
        if(i < zero)
            v[i] = 0;
        else if(i < zero + ones)
            v[i] = 1;
        else
            v[i] = 2;
    }
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

    sort012(v);
    display(v);
}