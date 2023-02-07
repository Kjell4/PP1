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

sort(v.begin(), v.end());
reverse(v.begin(), v.end());

int k, sum=0; cin >> k;

for(int i=0;i<k;i++){
    sum+=v[i];
}

cout << sum;
}