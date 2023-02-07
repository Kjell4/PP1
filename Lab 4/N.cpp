#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;
int a[n][n];
int b=1;

for(int i=2;i<=n;i++){
    int sum=0;
    for(int j=b;j<=i;j++){
        if(i%j==0){
            sum++;
        }
    }
    if(sum==2){
        cout << i << " is prime";
        cout << endl;
    }
}


}