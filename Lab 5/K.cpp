#include <iostream>
using namespace std;

int main(){

string s;
cin >> s;
int cnt=0;

for(int i=0;i<s.size();i++){
    if(s[i]=='a' || s[i]=='e' || s[i]=='u' || s[i]=='o' || s[i]=='i'){
        cnt++;
    }
}

cout << cnt;

}