#include <iostream>
using namespace std;

int main(){

string s,z="",t;
cin >> s >> t;
int a = s.find(t), b=0;

for(int i=s.size()-1;i>=0;i--){
    z+=s[i];
}

b=z.size()-(z.find(t)+1);

if(a==b){
    cout << a;
}
else{
    cout << a << " " << b;
}
}
