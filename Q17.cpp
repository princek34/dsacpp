// Q .19 Develop a program that takes a month (as an integer from
 1 to 12) and a year as input, then prints the number of days
 in that month, considering leap years.
 #include<iostream>
 using namespace std;
 int main(){
     int month,year;
     cout<<"Enter the year :";
     cin>>year;
     cout<<"Enter the month :";
     cin>>month;
     int days;
     switch(month){
         case 1:case 3:case 5: case 7:case 8: case 10: case 12:
         days=31;
         cout<<"number of days in month : "<<days<<endl;
         break;
         case 4: case 6: case 9: case 11:
         days=30;
         cout<<" Number od days in month : "<<days;
         break;
         case 2:
         if((year%400==0)||(year%4==0 )) 
         days=29;
     else{
         days=28;
         break;
         default:
         cout<<"Invalid number please enter the valid number :"<<endl;
     }
     cout<<"Number of days in month "<<month<<" is: "<<days<<" year "<<year;
     return 0;
     }
 }
