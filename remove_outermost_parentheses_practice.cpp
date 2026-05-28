#include <bits/stdc++.h>
using namespace std;

class Sol{
      public:
      string remove_p(string s){
            string result="";
            int level=0;
            for(char ch:s){
                  if(ch=='('){
                        if(level>0) result+=ch;
                        level++;
                        

                  }
                  else if(ch==')'){
                        level--;
                  if(level>0) result+=ch;

                  }
                  
            }
            return result;
            }
      };

int main(){
      string s="((())";
      Sol obj;
      string ans=obj.remove_p(s);
      cout<<"the string is:"<<ans<<endl;
      return 0;


}