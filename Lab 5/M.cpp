#include <iostream>
using namespace std;

int main(){

string s;
cin >> s;
char t;
cin >> t;
int cnt=0,x;
cin >> x;

for(int i=0;i<s.size();i++){
    if(s[i]==t){
        cnt++;
    }
}

if(cnt==x){
    cout << "YES";
}
else{
    cout << "NO";
}

}