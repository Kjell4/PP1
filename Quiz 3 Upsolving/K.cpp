#include <iostream>
#include <cmath>
using namespace std;

int main(){

string s;
cin >> s;
int dec=0,a=0;

for(int i=s.size()-1;i>=0;i--){
    dec+=(s[i]-'0')*pow(2,a);
    a++;
}

cout << dec;
}