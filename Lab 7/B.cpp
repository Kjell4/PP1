#include <bits/stdc++.h>
using namespace std;

void tobinary(int n){
    if(n==0){
        return;
    }
    tobinary(n/2);
    int a=n%2;
    cout << a;
}

int main(){
    
int n;
cin >> n;

tobinary(n);
}