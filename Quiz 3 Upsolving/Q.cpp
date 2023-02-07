#include <iostream>
using namespace std;

int main(){

string s,t="@gmail.com",x="";
int n;
cin >> n;

for(int i=0;i<n;i++){
    cin >> s;
    for(long long i=s.size()-10;i<s.size();i++){
        x+=s[i];
    }
    if(x==t){
        for(long long i=0;i<s.size()-10;i++){
            cout << s[i];
        }
        cout << endl;
    }
    x="";
}

}