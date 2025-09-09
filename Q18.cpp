// Q.20 Develop a program that takes four numbers as input and
 prints the largest among them.
 #include<iostream>
 using namespace std;
 int main(){
     int a,b,c,d;
     cout<<"Enter the four number is :"<<endl;
     cin>>a>>b>>c>>d;
     if(a>b && a>c && a>d){
         cout<<" a  is largest number "<<a<<endl;
     }else if(b>a && b>c && b>d){
         cout<<" b is largest number "<<endl;
     }else if(c>a && c>b && c>d){
         cout<<"c is largest number "<<c<<endl;
     }else{
         cout<<"d is largest number :"<<d<<endl;
     }
     return 0;
 }
