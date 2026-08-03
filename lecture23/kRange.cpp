#include<iostream>
#include<climits>
#include<algorithm>
using namespace std;

float max(float a ,float b){
    if(a>=b) return a;
    else return b;
}
float min(float a ,float b){
    if(a<b) return a;
    else return b;
}
int main(){
    int nums[]={5,2,10,8};
    int n = 4;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;
    for(int i=0;i<n-1;i++){
        if(nums[i]>=nums[i+1]){
            kmin = max(kmin,(nums[i]+nums[i+1])/2.0);
        }
        else{
            kmax = min(kmax,(nums[i]+nums[i+1])/2.0);
        }
        if(kmin>kmax){
            flag = false;
            break;
        }
    }
    if(flag==false) cout<<-1;
    else if(kmin==kmax){
        if(kmin-(int)(kmin)==0){
            cout<<"there is only one value of k is :"<<kmin;
        }
        else cout<<-1;
    }
    else{
        if(kmin-(int)(kmin)>0){
            kmin=(int)(kmin) + 1;
        }
        cout<<"range of k is :["<<kmin<<","<<(int)(kmax)<<"]";
    }

}