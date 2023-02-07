#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;
long long a[n];
int max=-1000000;

for(int i=0;i<n;i++){
    cin >> a[i];
}

for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}

cout << max;
}