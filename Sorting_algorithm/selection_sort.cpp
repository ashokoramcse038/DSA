#include<iostream>
using namespace std;
void select_min(int arr[],int n){
      for(int i=0; i<=n-2; i++){ //time complexity is 
            int mini=i;
            for(int j=i;j<=n-1; j++){
                  if(arr[j]<arr[mini]) {
                        mini = j;
                  }
                  // swap(arr[j],arr[min]);
                  
            }
      
      int temp = arr[mini];
      arr[mini] = arr[i];
      arr[i] = temp;
      }
}
int main(){
      int n;
      cout<<"Enter the array size: ";
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++){
            cin>>arr[i];
            select_min(arr,n);
      }
      for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
      }
}
//time complexity all case O(n^2)