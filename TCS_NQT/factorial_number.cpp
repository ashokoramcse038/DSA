#include<iostream>
using namespace std;
int factorial(long n){
      int num=1;
      for(int i=2;i<=n;i++){
          num = num*i;
      }
      return num;
}
int main(){
      long n;
      cout<<"Enter the number: ";
      cin>>n;
      int p=factorial(n);
      cout<<p;
}