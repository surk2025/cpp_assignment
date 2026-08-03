#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> nums(7);
    int n = nums.size();
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    for(int i=0;i<n;i++){
        int count=1;
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]) count++;
        }
        if(count>(n/2)){
            cout<<nums[i];
        }
    }
}