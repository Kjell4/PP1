#include <bits/stdc++.h>
using namespace std;

int dev(int a, int sum){
    int k;
    k=a%10;
    if(a==0){
        return sum;
    }
    sum+=(k/2);
    return dev(a/10,sum);
}

int main(){
int n;
cin >> n;

cout << dev(n,0);
}
