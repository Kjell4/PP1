#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

string s,t;
cin >> s >> t;

if(s.find(t)<s.size()){cout << "YES";}
else {cout << "NO";}

}