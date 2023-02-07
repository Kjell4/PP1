#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){

string a;
int n;
cin >> n;

vector <string> v;
set <string> s;

for(int i=0;i<n;i++){
    cin >> a;
    v.push_back(a);
    s.insert(a);
}

int cnt1=0, cnt2=0;

set <string>::iterator it=s.begin();

while(it!=s.end()){
    for(int i=0;i<n;i++){
        if(*it==v[i]){
            cnt1++;
        }
    }
    if(cnt1==3){
        cnt2++;
    }
    cnt1=0;
    it++;
}

cout << cnt2;

}