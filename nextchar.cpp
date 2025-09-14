// #include<iostream>
// using namespace std;
//  char getNext(char ch){
//     if(ch =='z'){
//         return 'a';
//     }else{
//         return ch+1;
//     }
//  }
//  int main(){
//     cout<<getNext('z');
//     return 0;
//  }
#include<iostream>
using namespace std;
char getnext(char ch){
    return ch+1;
}
int main(){
    cout<<getnext('z');
    return 0;
}