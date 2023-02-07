#include <bits/stdc++.h>
using namespace std;

int even(string a,int i,int cnt){
    if(i==a.size()){
        return cnt;
    }
    if(a[i]%2==0){
        cnt++;
    }
    return even(a,i+1,cnt); 
}

int main(){
    string a;
    cin >> a;

    cout << even(a,0,0);
}