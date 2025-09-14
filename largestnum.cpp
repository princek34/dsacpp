#include<iostream>
using namespace std;
int largestnum(int a,int b,int c){
    if(a>b && a>c){
        cout<<a<<" is largest number ";
    }else if(b>a && b>c){
        cout<<b<<" is largest number ";
    }else{
        cout<<c<<"  is largest number ";
    }
    return 0;
}
int main(){
    cout<<largestnum(5,3,9);
    return 0;
}