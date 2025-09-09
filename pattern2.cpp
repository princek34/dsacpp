// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     //outer loop
//     for(int i=1;i<=4;i++){
//         //for spaces 
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         //for stars
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     int num=1;
//     //outer loop
//     for(int i=1;i<=n;i++){
//         //inner loop
//         for(int j=1;j<=i;j++){
//             cout<<num++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int main(){
    int n=5;
    //outer loop
    for(int i=1;i<=n;i++){
        //for spaces 
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //for stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    for(int i=n;i>=1;i--){
        //for spaces
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        //for stars
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}