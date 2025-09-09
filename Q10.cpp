// Q .11 Write a program to input three characters from the user
 and display characters with their corresponding ASCII
 codes.
 #include<iostream>
 using namespace std;
 int main(){
     char c1,c2,c3;
     cout<<"Enter the first character : ";
     cin>>c1;
     cout<<"Enter the second character : ";
     cin>>c2;
     cout<<"Enter the three character : ";
     cin>>c3;

     if(c1>0){
         cout<<"Character : "<<c1<<"  || ASCII CODE "<<int(c1)<<endl;
     }
     if(c2>0){
         cout<<"Character : "<<c2<<" || ASCII CODE "<<int(c2)<<endl;
     }
     if(c3>0){
         cout<<"Character : "<<c3<<" || ASCII CODE "<<int(c3)<<endl;
     }
     return 0;
 }
