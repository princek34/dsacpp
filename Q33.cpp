// Q.41 Write a program to print all Armstrong numbers under
 1000
 #include <iostream>
using namespace std;

int main() {
    cout << "Armstrong numbers under 1000 are:\n";

    for (int num = 1; num < 1000; num++) {
        int sum = 0, temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            sum = sum + (digit * digit * digit); // cube of each digit
            temp = temp / 10;
        }

        if (sum == num) {
            cout << num << " ";
        }
    }

    return 0;
}
