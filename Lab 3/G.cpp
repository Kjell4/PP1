#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;
long long a[n];
int max=-1000000,min=1000000;

for(int i=0;i<n;i++){
    cin >> a[i];
}

for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
}

for(int i=0;i<n;i++){
    if(a[i]<min){
        min=a[i];
    }
}

for(int i=0;i<n;i++){
    if(a[i]==max){
        a[i]=min;
    }
}

for(int i=0;i<n;i++){
    cout << a[i] << " ";
}
}