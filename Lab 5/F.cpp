#include <iostream>
using namespace std;

int main(){

string s,t="";
cin >> s;
int l,r;
cin >> l >> r;

for(int i=l;i<=r;i++){
    t+=s[i];
}

cout << t;

}