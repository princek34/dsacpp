// Q.23 Write a program to calculate sum of first N even natural
 numbers
 #include<iostream>
 using namespace std;
 int main(){
     int n;
     cout<<"Enter the number :"<<endl;
     cin>>n;
     int sum=0;
     for(int i=0;i<=n;i++){
         if(i%2==0)
         sum+=i;
        
     }
     cout<<" sum of first even number :"<<sum<<endl;
    
     return 0;
}
