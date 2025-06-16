#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter number of rows" ;
    cin >> n ;
    int i = 1;
    while(i<=n){
        int j = 1 ;
        while (j<=i){  //means i=1 row 1 so j goes till 1 , i=2 row 2 so j goes till 2 and all . 
            cout << j ;
            j++;
        }
        cout << endl;
        i++;
      
    }
      return 0;
}