#include <iostream>
#include <algorithm>
using namespace std;

int main(){

string s,t;
cin >> s;
string a;
string k = s.substr(0,s.size() - 1);
t=s;

reverse(k.begin(), k.end());
reverse(s.begin() , s.end());

if(s!=t){
  cout << s.size();
}
else {
    a=s.substr(0, s.size()-1) ;
    if(a!=k){
        cout << a.size();
    }
    else {
        cout << 0;
    }
}

}