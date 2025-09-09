// Q.37 Write a program to print all Prime numbers under 100.
 #include <iostream>
 using namespace std;

 int main() {
     cout << "Prime numbers between 1 and 100 are:\n";

     for (int num = 2; num <= 100; num++) {
         bool isPrime = true;

         // check prime number or not
         for (int i = 2; i * i <= num; i++) {
             if (num % i == 0) {
                 isPrime = false;
                 break;
             }
         }

         if (isPrime) {
             cout << num << " ";
         }
     }

     cout << endl;
     return 0;
 }
  Q.38 Write a program to print all Prime numbers between two
 given numbers.
 #include <iostream>
 using namespace std;

 int main() {
     int start, end;
     cout << "Enter two numbers (range): ";
     cin >> start >> end;

     cout << "Prime numbers between " << start << " and " << end << " are:\n";

     for (int num = start; num <= end; num++) {
         if (num < 2) continue; // skip numbers less than 2
         bool isPrime = true;

         for (int i = 2; i * i <= num; i++) {
             if (num % i == 0) {
                 isPrime = false;
                 break;
             }
         }

         if (isPrime) {
             cout << num << " ";
         }
     }
     cout << endl;

     return 0;
 }
