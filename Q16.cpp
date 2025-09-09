// Q.18 Write a program that takes three numbers as input and
 finds the middle (second largest) number.
 #include<iostream>
 using namespace std;
 int main(){
     int a,b,c;
     cout<<"Enter the three numbers : ";
     cin>>a>>b>>c;
     int secondlargest;
     if((a>b && a<c)||(a<b && a>c)){
     secondlargest=a;
    
     }else if((b>c && b<a)||(b<c && b>a)){
         secondlargest=b;
     }else{
         secondlargest=c;
     }
     cout<<" Secondlargest element is : "<<secondlargest;
     return 0;
 }
