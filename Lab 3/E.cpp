#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;
long long a[n];
long long sum=0;

for(int i=0;i<n;i++){
    cin >> a[i];
}

for(int i=0;i<n;i++){
    sum+=a[i];
}

cout << sum;

}