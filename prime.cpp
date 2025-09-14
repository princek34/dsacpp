#include<iostream>
using namespace std;
bool isprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
            
        }else{
            return true;
            
        }

    }
}
bool isprime2(int n){
    if(n==1){
        return false;
    }
    for(int i=2; i*i<=n;i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}
int main(){
cout<<isprime2(2);
return 0;
}