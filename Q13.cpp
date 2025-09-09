// Q.14 Write a program that reads two integers from the user
 and determines if the first integer is divisible by the second
 integer
 #include<iostream>
 using namespace std;
 int main(){
     int num1,num2;
     cout<<"Enter the first integer : "<<endl;
     cin>>num1;
     cout<<"Enter the second integer : "<<endl;
     cin>>num2;
     if(num1%num2==0){
         cout<<" Yes divisible "<<endl;
     }else{
         cout<<"No divisible "<<endl;
     }
     return 0;

 }
 // Q.15 Create a program that takes the lengths of three sides of a
 triangle as input and determines whether the triangle is
 equilateral, isosceles, or scalene.   
 #include<iostream>
 using namespace std;
 int main(){
     int a ,b,c;
     cout<<"Enter the first side of triangles : = "<<endl;
     cin>>a;
      cout<<"Enter the second  side of triangles : = "<<endl;
     cin>>b;
      cout<<"Enter the third  side of triangles : = "<<endl;
     cin>>c;
     if(a==b && a==c){
         cout<<" Equiterial triangle"<<endl;
     }else if(a==b && a!=c ||b==c && a!=c){
         cout<<" isoscales triangle"<<endl;
     }else{
         cout<<" Scalene triangle "<<endl;
     }

    //return 0;
}
