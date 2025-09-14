// #include<iostream>
// using namespace std;
// void sayhello(){
//     cout<<"Hello world\n ";
// }
// void assistant(){
//     sayhello();
//     cout<<"work done";
// }
// int main(){
// assistant();
// return 0;
// }
//parameter function
#include<iostream>
using namespace std;
int sum(int a,int b){
        int sum=a+b;
        return sum;
    }
    int diff(int a,int b){
        int diff=a-b;
        return diff;
    }
int main(){
    int d=diff(5,7);
    int s= sum(5,7);
    cout<<"differece of two number is :"<<d<<endl;
    cout<<"Sum of two number is :"<<s<<endl;
}