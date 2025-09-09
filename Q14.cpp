// Q.16 develop a program that converts a temperature from
 Fahrenheit to Celsius or vice versa based on user input. The
 user should specify   
 #include<iostream>
 using namespace std;
 int main(){
     int choice;
     int temp,converted;
     cout<<"temperature converture  :"<<endl;
     cout<<" 1 for fahrenheight "<<endl;
     cout<<" 2 for celsius "<<endl;
     cout<<"Enter your choice "<<endl;
     cin>>choice;
     if(choice==1){
         cout<<"temperature in fahrenheight   "<<endl;
         cin>>temp;
         converted =(temp-32)*5.0/9.0;
         cout<<"Temperature in celsius "<<converted<<char(248)<<" C "<<endl;
     }else{
         cout<<"temperature in celsius   "<<endl;
         cin>>temp;
         converted =(temp*9.0/5.0)+32;
         cout<<"Temperature in fahrenheight  "<<converted<<char(248)<<" F "<<endl;
     }
     return 0;
    
 }                                                                                                                                                                                                                                                                                                                                                                                                                                         
