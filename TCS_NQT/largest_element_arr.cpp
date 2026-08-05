#include <iostream>
#include <cmath> // Preferred over <math.h> in C++
using namespace std;

int largestnumber(int arr[], int n) {
    if (n == 0) return -1; // or handle appropriately

    int lar = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > lar) {
            lar = arr[i];
        }
    }

    return lar;
}

void output(int arr[],int n){
      for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
      }
      cout<<endl;
}
int main(){
      int n;
      cout << "Enter the size of the array: "; // Cleaned up prompt
      cin >> n;
      int arr[n];

      for(int i=0;i<n;i++) cin>>arr[i];
      
      largestnumber(arr,n);
      output(arr,n);
      
      return 0;
}
