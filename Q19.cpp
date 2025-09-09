// Q.21 Create a program that takes a number (1-7) as input and
 prints the corresponding day of the week.
 #include<iostream>
 using namespace std;
 int main(){
     int num;
     cout<<"Enter the number correspondig the days :"<<endl;
     cin>>num;
    
     switch(num){
         case 1:
         cout<<" Monday "<<endl;
         break;
         case 2:
         cout<<" Tuesday "<<endl;
         break;
         case 3:
         cout<<" Wednesday "<<endl;
         break;
         case 4:
         cout<<" Thursday "<<endl;
         break;
         case 5:
         cout<<" Friday "<<endl;
         break;
         case 6:
         cout<<" Saturday "<<endl;
         break;
         case 7:
         cout<<" Sunday "<<endl;
         break;
         default:
         cout<<" Invalid entered please ! enter valid number ";
     }
     return 0;
    
 }
