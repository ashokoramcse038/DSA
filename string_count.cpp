#include<iostream>
using namespace std;
int main(){
      string s;
      cout<<"Enter sring:";
      getline(cin,s);
      string cnt;
      cout<<"The length of the string is:"<<s.size()<<endl;
      int st=0,end=s.size()-1;
      while(st<end){
            swap(s[st],s[end]);
            st++,end--;
      }
      cout<<"The reverse string is: "<<s<<endl;
}