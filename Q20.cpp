// Q.22 write a program to Calculate sum of first n natural number 
 #include<iostream>
 using namespace std;
 int main(){
     int n;
     cout<<"Enter the number ";
     cin>>n;
     int sum=0;
     for(int i=1;i<=n;i++){
         sum +=i;
        
     }
     cout<<" sum is first n natural number "<<sum<<endl;
     return 0;
 }
