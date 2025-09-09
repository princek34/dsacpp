// Q.9 . WAP to take date as an input in below given format and
//  convert the date format and display the result as given
//  below.
//  User Input date format – “DD/MM/YYYY” (27/11/2022)
//  Output format – “Day – DD , Month – MM , Year – YYYY”
//  (Day – 27, Month – 07, Year – 2022)
 #include<iostream>
 using namespace std;
 int main(){
     int dd,mm,yy;
     cout<<"enter your date of birth  dob  dd :=";
     cin>>dd;
     cout<<"enter your date of birth  dob  mm :=";
     cin>>mm;
     cout<<"enter your date of birth  dob  yy :=";
     cin>>yy;
     cout<<dd<<"  Day "<<mm<<" month "<<yy<<" year ";
     return 0;
 }
