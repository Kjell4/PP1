#include <bits/stdc++.h>
using namespace std;

void numbers(int n,int a){
    if(a>n){
    return;   
    }
    cout << a << " ";
    numbers(n,a+1);
}

int main(){

int n;
cin >> n;

numbers(n,1);
}