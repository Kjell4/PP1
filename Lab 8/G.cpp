#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main(){

vector <int> v;
int a, n;
cin >> n;

for(int i=0;i<n;i++){
    cin >> a;
    v.push_back(a);
}

int k, cnt=0, prime=0; cin >> k;

for(int i=0;i<v.size();i++){
    for(int j=1;j<=v[i];j++){
        if(v[i]%j==0){
            cnt++;
        }
    }
    if(cnt==2 && v[i]>=k){
        prime++;
    }
    cnt=0;
}

cout << prime;

}