// Q.5 Write a program to ask user about the cost price and selling
//  price banana per dozen. Calculate the profit or loss earned
//  upon selling 25 bananas.
 #include<iostream>
 using namespace std;
 int main(){
     int cp,sp,profit,loss;
     cout<<"Enter the cost price of banana per dozen cp = :";
     cin>>cp;
     cout<<"Enter the selling price of banana per dozen sp = :";
     cin>>sp;
     if(sp>cp){
         profit=sp-cp;
         cout<<"profit : = "<<profit<<endl;
     }else{
         loss=cp-sp;
         cout<<"loss : = "<<loss<<endl;
     }

     return 0;
 }
