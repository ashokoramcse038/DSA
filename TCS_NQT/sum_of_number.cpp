#include<iostream>
using namespace std;
int number(int n){
      int num =0;
      for(int i=1; i<=n; i++){
           num = num+i;
      }
      return num;
}
int number1(int num){
      
      int c = num*(num+1)/2;
      return c;
      
}
int main()
{
      int n;
      cout<<"Enter the number: ";
      cin>>n;
      cout<<"sum of the number is: "<<number1(n);
      
}