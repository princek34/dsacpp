// Q.24 Write a program to calculate sum of first N odd natural
 numbers
 #include<iostream>
 using namespace std;
 int main(){
     int n;
     int sum=0;
     cout<<" Enter the number n :"<<endl;
     cin>>n;
     for(int i=1;i<=n;i++){
         if(i%2!=0)
         sum+=i;
     }
     cout<<" Sum of first n natural odd number is :"<<sum;
     return 0;
 }
