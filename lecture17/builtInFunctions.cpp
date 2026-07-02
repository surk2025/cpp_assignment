#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int main(){    //string str = "surjeet ka naam akash hai";    //cout<<str.size()<<endl; // or cout<<str.length();    //int size =str.size();
    
   //string str = "surj";
   //cout<<str<<endl;
   //str.push_back('e');
   //str.push_back('e');
   //str.push_back('t');
   //cout<<str<<endl;
    
   //string s = "surjeet"
   //cout<<s<<endl
   //s.pop_back()
   //cout<<s<endl;

   // string s = "surjeet";
   // cout<<s<<endl;
   // s = "kumar" + s;
   // cout<<s<<endl;

   string s = "surjeet";
   cout<<s<<endl;
   reverse(s.begin(),s.end()); // reverse(s.begin()+2,s.end()-1);
   cout<<s<<endl;
} 
