#include<iostream>
using namespace std;
int formula(int a,int b){
    int res=((a*a)+(b*b)+(2*a*b));
    cout<<" (a+b)^2= "<<res;
    return res;
}
int main(){
    cout<<formula(5,5);
    return 0;
}