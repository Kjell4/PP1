#include <bits/stdc++.h>
using namespace std;

char elements(int a){
    if(a >= 10){
        return 'A'+a-10;   
    }
    return a+'0';
}
void kinary(int n, int k){
    if(n == 0)return;
    kinary(n/k, k);
    cout << elements(n%k);
}

int main(){
    int n, k;
    cin >> n >> k;
    
    kinary(n, k);
    
}