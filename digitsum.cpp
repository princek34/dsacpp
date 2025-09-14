#include<iostream>
using namespace std;
int digitsum(int n){
    int res=0;
    while(n>0){
    
    res +=n%10;//extract last digit
    n=n/10;// remove last digit
    }
    return res;   
}
int main(){
    cout<<digitsum(123);
    return 0;
}