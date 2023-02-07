#include <iostream>
#include <vector>

using namespace std;

int main(){

int n,k,a;
cin >> n >> k;

vector <int> v;

for(int i=0;i<n;i++){
    cin >> a;
    v.push_back(a);
}

int cnt=0;

for(int i=0;i<n;i++){
    if(v[i]==k){
        cnt++;
    }
}

cout << cnt;

}