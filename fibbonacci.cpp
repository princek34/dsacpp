#include<iostream>
using namespace std;
int main(){
    int n;
    int first=0,sec=1;
    cout<<"Enter the number n :";
    cin>>n;
    cout<<first<<" "<<sec<<" ";
    for(int i=2;i<n;i++){
        int third=first+sec;
        cout<<third<<" ";
        first=sec;
        sec=third;
       
    }
     cout<<"\n";
    return 0;
}