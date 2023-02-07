#include <bits/stdc++.h>
using namespace std;

char maxi(string s, int i, char max){
    if(i==s.size()){
        return max;
    }
    if(s[i]>max){
        max=s[i];
    }
    return maxi(s,i+1,max);
}

int main(){
    string s;
    cin >> s;

    cout << maxi(s,0,-1);
}