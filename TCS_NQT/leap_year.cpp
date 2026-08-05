#include <iostream>
#include <cmath> // Preferred over <math.h> in C++
using namespace std;

bool leapyear(int yr){ // Changed return type to bool
     if(yr%400==0) return true;
     if(yr%100==0) return false;
     return yr%4==0;
}

int main(){
      int n;
      cout << "Enter the number: "; // Cleaned up prompt
      cin >> n;
      
      bool p = leapyear(n);
      cout << p; // Prints 1 for true, 0 for false
      return 0;
}
