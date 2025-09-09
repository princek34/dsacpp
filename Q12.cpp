// Q.13 Develop a program that takes a student's score (0-100) as
 input and prints the corresponding grade (e.g., A, B, C, D, F)
 based on a grading scale.
 #include<iostream>
 using namespace std;
 int main(){
     int scores;
     cout<<"Enter your marks : = ";
     cin>>scores;
     if(scores>=90){
         cout<<scores<<" A Grade "<<endl;
     }else if(scores >=80 && scores <90){
         cout<<scores<<" B Grade "<<endl;
     }else if(scores >=70 && scores <80){
         cout<<scores<<" C Grade "<<endl;
     }else if(scores >=60 && scores <70){
         cout<<scores<<" D Grade "<<endl;
     }else if(scores >=50 && scores <60){
         cout<<scores<<" E Grade "<<endl;
     }else{
         cout<<scores<<" FAIL "<<endl;
     }
     return 0;
        
    
 }
