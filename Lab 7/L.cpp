#include <bits/stdc++.h>
using namespace std;

string palidrome(string s, int i, string t){
    if(i<0){
        if(s==t){
            return "Yes";
        }
        else{
            return "No";
        }
    }
    t+=s[i];
    return palidrome(s,i-1,t);
}

int main(){

string s;
cin >> s;

cout << palidrome(s,s.size()-1,"");
}