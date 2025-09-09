// Q3.write a program simple interest
 #include<iostream>
 using namespace std;
 int main(){
     int si,p,r,t;
     cout<<"Enter the amount P = :";
     cin>>p;
     cout<<"Enter the rate r = :";
     cin>>r;
     cout<<"Enter the time t = :";
     cin>>t;
     si=(p*r*t)/100;
     cout<<"simple interest is = :"<<si;
     return 0;
 }
