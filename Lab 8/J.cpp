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

cout << v[v.size()-1] - v[0];

}