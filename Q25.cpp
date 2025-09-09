// Q.29 Write a program to check whether a given number is a
 Prime number or not
 #include<iostream>
 using namespace std;
 int main(){
     int n;
     bool isprime=true;
     cout<<"Enter the number :";
     cin>>n;
     if(n<=1){
         isprime=false;// 0 and 1 is not prime number 
     }else{
         for(int i=2;i*i<=n;i++){
             if(n%i==0){
                 isprime=false;
                 break;
             }
         }
     }
     if(isprime){
         cout<<n<<" is  a prime number";
     }else{
         cout<<n<<" is not prime number "<<endl;
     }
     return 0;

 }
Q.30 Write a program to calculate LCM of two numbers
 #include <iostream>
 using namespace std;

 int main() {
     int n1, n2, lcm, hcf;
     cout << "Enter the numbers: ";
     cin >> n1 >> n2;

     for (int i = 1; i <= n1 && i <= n2; i++) {
         if (n1 % i == 0 && n2 % i == 0) {
             hcf = i;
         }
     }

     cout << "HCF is : " << hcf << endl;
     lcm = (n1 * n2) / hcf;
     cout << "LCM is : " << lcm << endl;

     return 0;
 }
  Q .31Write a program to reverse a given number
 #include <iostream>
 using namespace std;

 int main() {
     int num, reversedNum = 0, remainder;

     cout << "Enter an integer: ";
     cin >> num;

     while (num != 0) {
         remainder = num % 10;              // Get the last digit
         reversedNum = reversedNum * 10 + remainder; // Append digit
         num /= 10;                         // Remove last digit
     }

     cout << "Reversed number: " << reversedNum << endl;
     return 0;
 }
