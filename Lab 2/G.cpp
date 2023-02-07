#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int a,b;
cin >> a;
int max=0;

for(int i=0;i<a;i++){
    cin >> b;
    if(b>max){
        max=b;
    }
}

cout << max;
}