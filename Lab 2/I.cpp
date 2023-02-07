#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n,a;
cin >> n;
int cnt;

for(int i=0;i<n;i++){
    cin >> a;
    if(a%10==7){
        cnt++;
    }
}

cout << cnt;

}