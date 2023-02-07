#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int a;
cin >> a;
int b,odd=0,even=0;

for(int i=0;i<a;i++){
    cin >> b;
    if(b%2==0){
        even++;
    }
    else if(b%2!=0){
        odd++;
    }
}

cout << even << " " << odd;
}