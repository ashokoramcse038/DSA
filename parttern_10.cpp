#include<iostream>
using namespace std;
void parttern1(int n){
     for(int i=0; i<n; i++){
      for(int j=0;j<=i; j++){
            cout<<"*";
      }
      cout<<endl;
     }
}
void parttern2(int n){
     for(int i=0; i<n; i++){
      for(int j=0;j<=(n-i)-2; j++){
            cout<<"*";
      }
      cout<<endl;
     }
}
int main(){
      int n;
      cout<<"Enter the input : ";
      cin>>n;
      for(int i=0;i<n;i++){
            int s;
            cin>>s;
            parttern1(s);
            parttern2(s);
      }
}