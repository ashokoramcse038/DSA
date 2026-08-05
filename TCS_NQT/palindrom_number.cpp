#include<iostream>
using namespace std;
int palindrom(int n){
      int original_num = n;
      int rev = 0;
      while(n>0){
            int digit = n%10;
            rev = rev*10+digit;
            n/=10;
      }
      if(original_num != rev){
           return false;
      }
      return true;
}
int main(){
      int n;
      cout<<"Enter the number: ";
      cin>>n;
      int p=palindrom(n);
      cout<<p;
}