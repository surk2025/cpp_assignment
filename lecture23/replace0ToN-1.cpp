#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    vector<int> nums(5);
    int n = nums.size();
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> v(n,0);
    int x=0;
    // for(int i=0;i<n;i++){
    //     int min = INT_MAX;
    //     int mindx= -1;
    //     for(int j=0;j<n;j++){
    //         if(v[j]==1) continue;   
    //         else{
    //             if(min>nums[j]){
    //             min = nums[j];
    //             mindx= j;
    //             }
    //         }
    //     }
    //     nums[mindx] =x;
    //     v[mindx] =1; // visited 
    //     x++;
    // }
    // for(int i=0;i<n;i++){
    //     cout<<nums[i]<<" ";
    // }
     for(int i=0;i<n;i++){
        int min = INT_MAX;
        int mindx= -1;
        for(int j=0;j<n;j++){
            if(nums[j]<=0) continue;   
            else{
                if(min>nums[j]){
                min = nums[j];
                mindx= j;
                }
            }
        }
        nums[mindx] = -x; 
        x++;
    }
    for(int i=0;i<n;i++){
        nums[i]= -(nums[i]);
        cout<<nums[i]<<" ";
    }
    cout<<endl;

}