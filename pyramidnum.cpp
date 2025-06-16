#include<iostream>
using namespace std;
int main(){
    int n;
    cout << " Enter the number of rows " ;
    cin >> n ;
    int i = 1;
    while (i<=n){
        int spaces = 1 ;
        while(spaces <= n-i){
            cout << " " ;
            spaces++;
        }
        int num = 1 ;
        while(num <= i){
            cout << num ;
            num++;
        }
        int decnum = i-1;
        while(decnum >= 1 ){
            cout << decnum;
            decnum--;
        }
        cout << endl;
        i++;
    }
    return 0;
}