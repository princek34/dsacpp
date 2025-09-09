// #include<iostream>
// using namespace std;
// int main(){
//     int n=4;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=(n-i+1);j++){
//             cout<<" * ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     //for outer loop 
//     for(int i=1;i<=4;i++){
//         //Inner loop
//         for(int j=1;j<=i;j++){
//             cout<<j<<"  ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     char ch='A';
//     //for outer loop 
//     for(int i=1;i<=4;i++){
//         //Inner loop
//         for(int j=1;j<=i;j++){
//             cout<< ch <<" ";
//             ch++;
//         }
//         cout<<endl;
//     }
//     return 0;

// }
//print the hollow rectangle 
// #include<iostream>
// using namespace std;
// int main(){
//     int n=5;
//     for(int i=1;i<=n;i++){
//         // cout<<"*";
//         for(int j=1;j<=n;j++){
//             if(i==1|| i==n || j==1||j==n){
//                 cout<<"*";
//             }else{
//                 cout<<" ";  
//         }
//         }
//             cout<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     for(int i = 1; i <= n; i++){
//         for(int j = 1; j <= n; j++){
//             if(i == 1 || i == n || j == 1 || j == n){
//                 cout << "*";
//             } else {
//                 cout << " ";
//             }
//         }
//         cout << endl;  // new line after finishing one row
//     }
//     return 0;
// }
//Q.43
// #include<iostream>
// using namespace std;
// int main(){
//     //outer loop
//     for(int i=1;i<=4;i++){
//         //innerloop
//         for(int j=1;j<=4;j++){
//             if((i==1 ||i==4 && (j==1||j==2||j==3||j==4))||
//             (j==1 ||j==4 &&(i==1|2||i==3||i==4))){
//                 cout<<"*";
//             }else{
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// } 
// write a program for print the swastik pattern 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter an odd number for size: ";
    cin >> n;

    cout << "Swastik pattern of size " << n << ":\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            
            // Conditions to print '*'
            if (i == n/2 || j == n/2 || 
               (i == 0 && j >= n/2) || 
               (j == 0 && i <= n/2) || 
               (i == n-1 && j <= n/2) || 
               (j == n-1 && i >= n/2)) 
            {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
