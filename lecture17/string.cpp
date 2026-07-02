#include<iostream>
#include<string>
using namespace std;

int main(){
    // char data types
    /*char str[7]= "surj"<<endl;
    for(int i=0;i<=7;i++){
        cout<<str;
    }
    cout<<"My Name Is Surjeet"; 
    */
   // string
   //string str= "surjeet";
   //cout<<str;
   string name;
   //cin>>s; // only if the given str has no space
   getline(cin,name);
   cout<<name;
   
}