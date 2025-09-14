// #include<iostream>
// using namespace std;
// void check(int num){
//     if(num%2==0){
//         cout<<num<<" :Even number "<<endl;
//     }else{
//         cout<<num<<" :Odd number "<<endl;
//     }
// }
// int main(){
//     check(5);
//     return 0;
// }
#include<iostream>
using namespace std;
bool isEven(int num){
    if(num%2==0){
        return true;
    }else{
        return false;
    }
}
int main(){
    int result = isEven(8);
    cout<<result;
    return 0;
}