#include <iostream>

using namespace std;

int main(){

int n;
cin >> n;
int a[n];
int max=-1000000, sum=0;


for(int i=0;i<n;i++){
    cin >> a[i];
}

for(int i=0;i<n;i++){
    if(a[i]>max){
        max=a[i];
    }
    sum+=a[i];
}

cout << sum << " " << max;
}