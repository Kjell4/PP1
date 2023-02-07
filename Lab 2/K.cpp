#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;
int a;
double b;

for(int i=1;i<=n;i++){
    a=sqrt(i);
    b=sqrt(i);
    if(a==b){
        cout << i << endl;
    }
}

}