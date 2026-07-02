#include<iostream>
#include<string>
using namespace std;

int main(){
    //string input = "surjeet";
    //cout<<input<<endl;
    //input[1]='a';
    //cout<<input<<endl;
    string input;
    getline(cin,input);
    for(int i=0;i<input.size();i++){
    if(i%2==0){
        input[i]='a';
    }
    }
    cout<<input;
   
}