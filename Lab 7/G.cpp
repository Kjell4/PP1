#include <bits/stdc++.h>
using namespace std;

int fac(int a){
    if(a==1){
        return 1;
    }
    if(a==0){
        return 1;
    }
    return (a * fac(a-1));
}

int main(){
int n;
cin >> n;

cout << fac(n);
}