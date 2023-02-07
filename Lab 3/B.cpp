#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;
long long a[n];
int cnt=0;

for(int i=1;i<=n;i++){
    cin >> a[i];
}

for(int i=1;i<=n;i++){
    if(a[i]>0){
        cnt++;
    }
}

cout << cnt;
}