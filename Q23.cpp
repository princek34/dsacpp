// Q.25 Write a program to calculate sum of squares of first N
 natural numbers
 #include<iostream>
 using namespace std;
 int main(){
     int n,sq;
     int sum=0;
     cout<<"Enter the number is :"<<endl;
     cin>>n;
     for(int i=1;i<=n;i++){
         sq=i*i;
         sum+=i*i;
         // cout<<i*i<<endl;
         cout<<sq<<endl;
        
     }
     cout<<sum;
     // cout<<sq<<endl;
     // cout<<"sum of sq of first n natural number is :"<<sq<<endl;
     return 0;
 }
