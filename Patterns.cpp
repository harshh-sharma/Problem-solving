#include <iostream>;
using namespace std;

void print2(int n){
    int i,j;
    for( i = 0 ; i < n ; i++){
        for(j = 1 ; j <= n-i ; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void print3(int n){
    int i,j;
    for(i = 0 ; i < n ; i++) {
        for( j = 1 ; j <= n*2 ; j++){
            if( j >= n-i && j <= n + i){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void print4(int n){
    int i,j;
    for(i = n - 1 ; i >= 0 ; i--) {
        for( j = 1 ; j <= n*2 ; j++){
            if( j >= n-i && j <= n + i){
                cout << "*";
            }else{
                cout << " ";
            }
        }
        cout << endl;
    }
}

void print5(int n){
    int i, j, count = 0;
    for( i = 1 ; i <= n ; i++){
        if(i > (n/2)){
            count = n - i;
        }else{
            count = i;
        }
        for(j = 1 ; j <=  count ; j++){
            cout << j;
        }
        cout << endl;
    }
}

void print6(int n){
    int i,j, count = 0;
    for(i = 0 ; i < n ; i++){
     
        for(j = 0 ; j <= i ; j++){
            count++;
            cout << count << " ";
        }
         cout << endl;
    }
   
}

void print7(int n){
    int i,j;
    char ch = 65;
    for(i = 0 ; i < n ; i++){
        ch = 65;
        for(j = 0 ; j <= i ; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}

void print8(int n){
    int i,j;
    char ch = 65;
    for(i = n ; i >= 0 ; i--){
        ch = 65;
        for(j = 0 ; j <= i ; j++){
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
}


int main(){
    int n;
    cout << "Enter value of n ";
    cin >> n;
    // print3(n);
    print4(n);
}