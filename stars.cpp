#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "enter number of rows" ;
    cin >> n ;
    int i = 1 ;
    while (i<=n){
        int spaces = 1 ;
        while (spaces <= n-i) {
            cout << " " ;
            spaces++;
        }
        int stars= 1;
        while(stars <= (2*i) - 1){
            cout << "*" ;
            stars++;
        }
        cout <<endl;
        i++;
    }
    return 0;
} 