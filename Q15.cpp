// Q.17 Write a program that takes a start year and an end year
 from the user and prints all the leap years in that range.
 #include<iostream>
 using namespace std;
 int main(){
     int sy,ey;
     cout<<" Enter the start year : ";
     cin>>sy;
     cout<<"Enter the last year :";
     cin>>ey;
     for(int i=sy;i<=ey;i++){
         if(i%4==0)
         cout<<"Leap year "<<i<<endl;
     }
     return 0;
 }
