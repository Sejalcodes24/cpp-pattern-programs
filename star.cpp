#include<iostream>
using namespace std;
int main(){
    cout << "Enter number of rows" ;
    int n ;
    cin >> n ;
    int i=1;
    while(i <= n){
        int j=1 ;
        while(j<=n){
            cout << "*" ;
            j++;
        }
        cout << endl;
        i++ ;
    }
    return 0;
}