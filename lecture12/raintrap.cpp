#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v){
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> height(n);

    for(int i=0;i<n;i++){
        cin >> height[i];
    }

     // Prefix maximum array
    vector<int> amax(n);
    amax[0] = height[0];

    for(int i=1;i<n;i++){
        amax[i] = max(amax[i-1], height[i]);
    }
    int maxr=amax[n-1];

    // Suffix maximum array
    vector<int> bmax(n);
    bmax[n-1] = height[n-1];

    for(int i=n-2;i>=0;i--){
        bmax[i] = max(bmax[i+1], height[i]);
    }
    int maxl=bmax[0];
    // calculate max area
    int gap=0;
    for(int i=1;i<n;i++){
        if(i-1>=gap) gap++;
       
    }
    int mul = min(bmax[0],bmax[n-1]);
    int maxArea =gap*mul;
    cout<<maxArea<<gap<<mul;
}