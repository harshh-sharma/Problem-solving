#include <iostream>;
using namespace std;

// int main(){
//     int i, j,n;
//     cout << "Enter value of n ";
//     cin >> n;
//     for(i = 1 ; i <= n ; i++){
//         for(j = 1 ; j <= i ; j++){
//             cout << i << " " ;
//         }
//         cout << endl;
//     }
// }

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

void print9(int n){
    int i,j;
    char ch = 65;
    for(i = 0 ; i < n ; i++){
        for(j = 0 ; j <= i ; j++){
            cout << ch;
        }
        ch++;
        cout << endl;
    }
}

void print10(int n){
    int i,j;
    char ch = 65;
    for(i = 0 ; i < n ; i++){
        ch = 65;
        for(j = 1 ; j <= n*2 ; j++){
            if(j >= n - i && j <= n + i){
                cout << ch;
            }else{
                cout << " ";
            }
            
            
           if((j - 1) <= i){
            //   cout << j;
               ch++;
           }else{
               ch--;
           }
        }
        cout << endl;
    }
}
void print11(int n){
    for(int i = 0; i < n; i++){
        
        char ch = 'E' - i;   // starting character for row
        
        for(int j = 0; j <= i; j++){
            cout << char(ch + j) << " ";
        }
        
        cout << endl;
    }
}


int main(){
    int n;
    cout << "Enter value of n ";
    cin >> n;
    // print3(n);
    // print4(n);
    // print5(n);
    // print6(n);
    // print7(n);
    // print8(n);
    // print9(n);
    // print10(n);
    print11(n);
}