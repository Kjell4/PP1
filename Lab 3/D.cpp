#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;
long long a[n];
int max=-1000000;
int x;

for(int i=1;i<=n;i++){
    cin >> a[i];
}

for(int i=1;i<=n;i++){
    if(a[i]>max){
        max=a[i];
        x=i;
    }
}

cout << x;
}