#include <bits/stdc++.h>
using namespace std;

int main(){

int n, k=0;
cin >> n;
int max=-1, min=10;

while(n!=0){
    k=n%10;
    if(k>max){
        max=k;
    }
    if(k<min){
        min=k;
    }
    n/=10;
}

cout << max << " " << min;
}