// Q.8  . Write a program to input three characters from the user and
//  display characters with their corresponding ASCII codes.
 #include<iostream>
 using namespace std;
 int main(){
     int n1,n2,n3;
     cout<<"Enter the first number n1 : = ";
     cin>>n1;
     cout<<"Enter the second number n2 : = ";
     cin>>n2;
     cout<<"Enter the third number n3 : ";
     cin>>n3;
    
     cout<<"ASCII code for character is = : "<<char(n1)<<endl;
     cout<<"ASCII code for character is = : "<<char(n2)<<endl;
     cout<<"ASCII code for character is = : "<<char(n3)<<endl;
     return 0;    
}
