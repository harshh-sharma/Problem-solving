// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void printName(int count){
    if(count == 5) return ;
    cout << "Harsh" << endl;
    count++;
    printName(count);
}

int main() {
   int count = 0;
   printName(count);
   return 0;
}