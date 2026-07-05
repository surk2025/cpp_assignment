#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string input;
    getline(cin,input);
    int count=0;
    for(int i=0;i<input.size();i++){
    if(input.size()== 1) break;
    else if(input.size()==2){ 
    count = 1; break;
    }    
    else if(input[i]!=input[i+1] && input[i]!=input[i-1]){
        count++;
    }
    }
    cout<<count;
   
}