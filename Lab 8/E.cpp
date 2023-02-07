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

int x, y;
cin >> x >> y;

v.erase(v.begin()+x, v.begin()+y+1);

for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
}

}