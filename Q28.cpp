// Q.34 Write a program to check whether a given number is
 there in the Fibonacci series or not.
 #include <iostream>
 using namespace std;

 int main() {
     long long num;
     cout << "Enter a number: ";
     cin >> num;

     long long first = 0, second = 1, next;

     if (num == 0 || num == 1) {
         cout << num << " is in the Fibonacci series." << endl;
         return 0;
     }

     next = first + second;
     while (next <= num) {
         if (next == num) {
             cout << num << " is in the Fibonacci series." << endl;
             return 0;
         }
         first = second;
         second = next;
         next = first + second;
     }

     cout << num << " is NOT in the Fibonacci series." << endl;
     return 0;
 }
  Q 35 Write a program to calculate HCF of two numbers.
 #include <iostream>
 using namespace std;

 int main() {
     int a, b;
     cout << "Enter two numbers: ";
     cin >> a >> b;

     int x = a, y = b;

     // Euclidean algorithm
     while (b != 0) {
         int temp = b;
         b = a % b;
         a = temp;
     }

     cout << "HCF of " << x << " and " << y << " is: " << a << endl;
     return 0;
 } 
