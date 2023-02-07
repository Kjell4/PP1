#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main(){

int a,n;
cin >> n;

vector <int> v;
set <int> s;

for(int i=0;i<n;i++){
    cin >> a;
    v.push_back(a);
    s.insert(a);
}

int cnt1=0, cnt2=0;

set <int>::iterator it=s.begin();

while(it!=s.end()){
    for(int i=0;i<n;i++){
        if(*it==v[i]){
            cnt1++;
        }
    }
    if(cnt1>1){
        cnt2++;
    }
    cnt1=0;
    it++;
}

cout << cnt2;


}