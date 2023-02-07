#include <bits/stdc++.h>
using namespace std;

string dev(int a){
    if(a==1){
        return "Yes";
    }
    else if(a%2!=0){
        return "No";
    }
    return dev(a/2);
}

int main(){

int a;
cin >> a;

cout << dev(a);
}