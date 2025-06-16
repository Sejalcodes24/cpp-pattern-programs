//Butterfly pattern 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout << " write number of rows" ;
    cin >> n ;
    int i = 1; 
    while (i<=n){
        int stars = 1;
        while( stars <= i){
            cout << "*" ;
            stars++;
        }
        int spaces = 1;
        while (spaces <= 2*(n-i)){
            cout << " " ;
            spaces ++ ;
        }
        int str= 1 ;
        while (str <= i){
            cout << "*" ;
            str ++;
        }
        cout << endl;
        i++;
    }
    i = n;
    while (i>=1){
        int star = 1;
        while( star <= i){
            cout << "*" ;
            star++;
        }
        int space= 2*(n-i);
        while (space >= 1){
            cout << " " ;
            space -- ;
        }
        int sta = i ;
        while (sta >= 1){
            cout << "*" ;
            sta --;
        }
        cout << endl;
        i--;
    }
return 0;
}