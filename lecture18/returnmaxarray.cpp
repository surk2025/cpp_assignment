#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    string str[] = {"02","45","0789","0010","0007678"} ;
    int max = stoi(str[0]);
    string mas = str[0];
    for(int i=1;i<5;i++){
        int x = stoi(str[i]);
        if(x>max) {
            max = x;
            mas = str[i];
        }
    }
    cout<<mas;


}