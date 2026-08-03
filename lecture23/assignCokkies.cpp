#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> child(8);
    int m = child.size();
    for(int i=0;i<m;i++){
        cin>>child[i];
    }
    
    vector<int> cokkies(4);
    int n = cokkies.size();
    for(int i=0;i<n;i++){
        cin>>cokkies[i];
    }
    sort(child.begin(),child.end());
    sort(cokkies.begin(),cokkies.end());
    int grid = 0;
    int i=0;
    int j=0;

    while(i<m and j<n){
            if(child[i]<=cokkies[j]){
            grid++;
            i++;
            j++;
            }
            else {
                j++;
            }
        }
    cout<<grid;//expected 4 but output = 8

}