// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int countDigit(int n){
    int count = 0;
    while(n > 0){
        count++;
        n = n/10;
    }
}

int reverseOfNumber(int n){
    int reverseNumber = 0;
    while(n > 0){
        reverseNumber = ((reverseNumber * 10) + n%10);
        n = n/10;
    }
    return reverseNumber;
}

int isNumberPalidrome(int n){
    int actualNumber , reverseOfNumber = 0;
    actualNumber = n;
    while(n > 0){
        reverseOfNumber = ((reverseOfNumber * 10) + n%10);
        n = n/10;
    }
    if(actualNumber == reverseOfNumber) {
        return 1;
    }else{
         return  0; 
    }
}

int isNumberArmstrong(int n){
    int armStrong = 0, actualNumber,lastDigit = 0;
    actualNumber = n;
    while(n > 0){
        lastDigit = n%10;
        armStrong += (lastDigit * lastDigit * lastDigit);
        // cout << armStrong;
        // cout << endl;
        n = n / 10;
    }
    if (actualNumber == armStrong) return 1;
    else return -1;
}

void numDivisor(int n){
    int i = 1;
    while(i <= n){
        if(!(n%i)) cout << i << ",";
        i++;
    }
}

int main() {
    // Write C++ code here
    int n = 78;
    // cout << countDigit(n);
    // cout << reverseOfNumber(n);
    // cout << isNumberPalidrome(n);
    // cout << isNumberArmstrong(n);
    numDivisor(n);

    return 0;
}