// Q.26 Write a program to calculate sum of cubes of first N
 natural numbers
 #include<iostream>
 using namespace std;
 int main(){
     int n;
     int sum=0;
     cout<<"Enter the number n :";
     cin>>n;
     for(int i=1;i<=n;i++){
         //cube=i*i*i;
         sum+=i*i*i;
         cout<<i*i*i<<endl;
        
     }
     cout<<"sum of first n natural cube number is "<<sum;
     //cout<<"sum of first n cube number is "<<sum<<endl;
     return 0;
 }
Q.27 Write a program to calculate factorial of a number
 #include<iostream>
 using namespace std;
 int main(){
     int n;
     long long  factorial=1;
     cout<<"Enter the number n :";
     cin>>n;
     if(n<0){
         cout<<"Enter valid number :";
     }else{
         for(int i=1;i<=n;i++){
             factorial*=i;
         }
         cout<<"factorial is :"<<factorial;
     }
     return 0;
 }
Q.28 Write a program to count digits in a given number
 #include<iostream>
 using namespace std;
 int main(){
     int n;
     int count=0;
     cout<<"Enter the number n :";
     cin>>n;
     if(n<0){
         n=-n;
     }else if(n==0){
         count=1;
     }else{
         while(n>0){
             n=n/10;
             count++;
         }
     }
     cout<<" Number of digits = "<<count;
     return 0;
 }
