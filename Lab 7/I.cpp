#include <bits/stdc++.h>
using namespace std;

long long infinite(long long sum){
    int n;
    cin >> n;
    sum+=n;
    if(n==0){
        return sum;
    }
    return infinite(sum);
}

int main(){

cout << infinite(0);
    
}