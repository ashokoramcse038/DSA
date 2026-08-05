#include<iostream>
#include<vector>
using namespace std;
int f(int arr[],int low,int high){
      int i=low;
      int j=high;
      int pivot = arr[low];
      while(i<j){
            while(arr[i]<=pivot && i<=high){
                  i++;
            }
            while(arr[j]>pivot && j>= low+1){
                  j--;
            }
            if(i<j) swap(arr[i],arr[j]);
      }
      swap(arr[low],arr[j]);
      return j;
}
void quick_S(int arr[],int low,int high){
      if(low<high){
            int position = f(arr,low,high);
            quick_S(arr,low, position-1);
            quick_S(arr,position+1,high);
      }

}


int main(){
      int n;
      cout<<"Enter the array size: ";
      cin>>n;
      int arr[n];
      for(int i=0; i<n; i++) cin>>arr[i];
      quick_S(arr,0,n-1);
      
      for(int i=0; i<n; i++){
            cout<<arr[i]<<" ";
      }
}
//time complexity
//worst case O(nlogn)
//average case O(nlogn)
//best case O(nlogn);
//space complexity is O(1)