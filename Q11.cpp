// Q .12 Create a program that takes a person's age as input and
 classifies them into different age groups (e.g., child,
 teenager, adult, senior).
 #include<iostream>
 using namespace std;
 int main(){
     int age;
     cout<<"Enter your age : ";
     cin>>age;
     if(age<=12){
         cout<<" Child "<<age<<endl;
     }else if(age>12 && age<=19){
         cout<<"Teenager "<<age<<endl;
     }else if( age>=20 && age<=25){
         cout<<" ADULT "<<age<<endl;
     }else{
         cout<<" SENIOR "<<age<<endl;
     }
     return 0;
 }
