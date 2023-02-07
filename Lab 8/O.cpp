#include <bits/stdc++.h>

using namespace std;

int main(){

string t,k="";
cin >> t;

for(int i=0;i<t.size();i++){
    k+=tolower(t[i]);
}

set <char> s;

for(int i=0;i<k.size();i++){
    s.insert(k[i]);
}

set <char>::iterator it = s.begin();

cout << s.size() << endl;

while(it != s.end()){
    cout << *it << " ";
    it++;
}
}