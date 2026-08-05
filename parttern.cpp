#include<iostream>
using namespace std;
void parttern1(int n){
      for(int i=0; i<n; i++){// this is called outer loop
            for(int j=0; j<n; j++){// this is called inner loop
                  cout<<"*"; // here print the statement

            }
            cout<<endl;// this is use for next line
      }
      
}
void parttern2(int n){
      for(int i=0; i<n; i++){// this is called outer loop
            for(int j=0; j<=i; j++){// this is called inner loop
                  cout<<"*"; // here print the statement

            }
            cout<<endl;// this is use for next line
      }
      
}
void parttern3(int n){
      for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                cout<<j;
            }
            cout<<endl;
        }
      
}
void parttern4(int n){
      for(int i=1; i<=n; i++){
            for(int j=0; j<(n-i)+1; j++){
                cout<<"*";
            }
            cout<<endl;
        }
      
}
void parttern5(int n){
      for(int i=1; i<=n; i++){
            for(int j=1; j<=(n-i)+1; j++){
                cout<<j;
            }
            cout<<endl;
        }
      
}
void parttern6(int n){
      for(int i=0; i<n; i++){
            for(int j=1; j<=(n-i)+1; j++){
                cout<<j;
            }
            cout<<endl;
        }
      
}
void parttern7(int n){
       for(int i=0; i<n; i++)
     {
        //space
        for(int j=0; j<(n-i)-1; j++){
            cout<<" ";
        }
        //star print
        for(int j=0; j<2*i+1; j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<(n-i)-1; j++){
            cout<<" ";
        }
        cout<<endl;
     }
}
void parttern8(int n){
   for(int i=0; i<n; i++)
     {
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        //star print
        for(int j=0; j<2*n-(2*i+1); j++){
            cout<<"*";
        }
        //space
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        cout<<endl;
     }
}
      
int main(){
      int t;
      cout<<"Enter the input: ";
      cin>>t;
      for(int i=0;i<t;i++){
            int n;
            cin>>n;
            
            parttern5(n);
            // parttern8(n);
      }
      return 0;
}