// Q.33 Write a program to print first N terms of Fibonacci series.
 #include <iostream>
 using namespace std;

 int main() {
     int n;
     cout << "Enter the number of terms: ";
     cin >> n;

     long long first = 0, second = 1, next;

     cout << "Fibonacci Series: ";

     for (int i = 1; i <= n; i++) {
         if (i == 1) {
             cout << first << " ";
             continue;
         }
         if (i == 2) {
             cout << second << " ";
             continue;
         }
         next = first + second;
         cout << next << " ";
         first = second;
         second = next;
     }

     cout << endl;
     return 0;
 }
