#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;
int b[n][n];
int m=1;
int p=n-1;


for(int i=0;i<n;i++){
    for(int j=0;j<p;j++){
       
        cout << ".";
         
    }
    cout << m++;                  
    

    for(int i=p+1;i<n;i++){
         cout << ".";
       
    }    
        cout << endl;
        p--;      
}
}