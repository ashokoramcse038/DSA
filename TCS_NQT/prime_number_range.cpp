#include<iostream>
using namespace std;
bool isprime(int n){
      if(n<=1){
            return false;
      }
            for(int i=2; i<n; i++){
                  if(n%i == 0){
                        return false;
                  }
                  
            }
            return true;
      }

void foundprime(int l,int r){
      bool found = false;
      for(int i=l; i<=r; i++){
            if(isprime(i)){
                  cout<<" "<<i;
                  found = true;
            }
      }
      if(!found){
            cout<<"Not prime number.";
      }
}
int main(){
      int l=10,r=30;
      
      foundprime(l,r);
}