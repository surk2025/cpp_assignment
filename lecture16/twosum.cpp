#include<iostream>
#include<vector>
using namespace std;

vector<int> twosum(vector<int>& nums,int target){
    int n=nums.size();
            for(int i=0;i<n;i++){
            for(int j=n-1;j>i;j--){
                if(nums[i]+nums[j]==target){
                return {i,j};
            }
        }
    }
}

int main(){
    int n;
    cout<<"enter size of array:";
    cin>>n;
    vector<int>nums;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        nums.push_back(q);
    }
    int target;
    cout<<"enter target:";
    cin>>target;
    twosum(nums,target);
}    