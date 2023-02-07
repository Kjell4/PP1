#include <bits/stdc++.h>

using namespace std;

int main(){

set <int> s;
int a, n;
cin >> n;

for(int i=0;i<n;i++){
    cin >> a;
    s.insert(a);
}

int sum=0;

set <int>:: iterator it=s.begin();

while(it!=s.end()){
    sum+=(*it);
    it++;
}

cout << sum;

}