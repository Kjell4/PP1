#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

string s,t;
cin >> s >> t;
int n;

if(t.size()%s.size()!=0){
    cout << "NO";
    return 0;
}

n=t.size()/s.size();

for(int i=0;i<n;i+=s.size()){
    if(s!=t.substr(i,s.size())){
        cout << "NO";
        return 0;
    }
}
cout << "YES";

}