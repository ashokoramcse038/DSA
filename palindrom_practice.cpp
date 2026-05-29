#include<iostream>
using namespace std;
int main(){
      string s;
      getline(cin,s);
      int st=0,end=s.size()-1;
      while(st<end){
            if(s[st]!=s[end]){
                  cout<<"not";
                  return 0;
            }
            st++,end--;
      }
      cout<<"Palindrom string.";
}