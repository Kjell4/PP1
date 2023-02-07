#include <iostream>
#include <algorithm>
using namespace std;

int main(){

string s;
getline(cin,s);

int n;
cin >> n;
char x[n];
for(int i=0;i<n;i++){
    cin >> x[i];
}

sort(x,x+n);

for(int i=0;i<n;i++){
    int cnt=0;
    for(int j=0;j<s.size();j++){
        if(s[j]==x[i]){
            cnt++;
        }
    }
    cout << x[i] << " " << "-" << " " << cnt;
    cout << endl;
}

}