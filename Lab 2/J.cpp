#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;
int sum=0;



for(int i=0;i<n; i++){
    int a;
    cin >> a;

    while(a!=0){
        if(a%10==0){
        sum+=1;
        }
        a/=10;
        }
}

cout << sum;

}