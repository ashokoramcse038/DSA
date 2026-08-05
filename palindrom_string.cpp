#include<iostream>
using namespace std;
int main(){
      string s;
      cin>>s;
      int st=0,end=s.size()-1;
      while(st<end){
            if(s[st]!=s[end]){
                  cout<<"Not palindrom string.";
                  return 0;
            }
            st++,end--;
      }
      cout<<"It is a palindrom: ";
}