#include <iostream>
#include <cmath> // Preferred over <math.h> in C++
using namespace std;

bool bubble_sort(int arr[],int n){ //so bubble sort is time complexity is O(n^2)
      
      for(int i=0; i<n-1; i++){//this is outer loop run: 1 times then, but n times run then
            bool swaped = false;
            for(int j=0; j<n-1-i; j++){ // this inner loop , run: n times inner loop is n*n times run
                  if(arr[j]>arr[j+1]){
                        swap(arr[j],arr[j+1]);
                        swaped = true;
                        
                  }
            }
            if(!swaped){ // array is already sorted 
                  return arr;
            }
      }
      return arr;
}

int main(){
      int n;
      cout << "Enter the size of the array: "; // Cleaned up prompt
      cin >> n;
      int arr[n];
      for(int i=0;i<n;i++) cin>>arr[i];
      
      bubble_sort(arr,n);
      for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
      }
      
      return 0;
}
