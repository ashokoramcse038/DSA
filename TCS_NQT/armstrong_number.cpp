#include <iostream>
#include <cmath> // Preferred over <math.h> in C++

using namespace std;

bool armstrong(int n){ // Changed return type to bool
      int temp = n;
      double num = 0;
      int digit;
      // FIX 1 & 2: Loop until temp becomes 0
      while (temp > 0) {
            digit = temp % 10;
            num += pow(digit,3); // FIX 3: Multiplication avoids pow() rounding bugs
            temp /= 10;
      }
      
      // Compare the accumulated sum back to the original input 'n'
      return (num == n); 
}

int main(){
      int n;
      cout << "Enter the number: "; // Cleaned up prompt
      cin >> n;
      
      bool p = armstrong(n);
      cout << p; // Prints 1 for true, 0 for false
      return 0;
}
