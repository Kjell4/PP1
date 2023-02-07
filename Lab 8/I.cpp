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

int k;
cin >> k;
bool x=false;

for(int i=0;i<v.size();i++){
    if(v[i]==k)
    x=true;
}

if(x==true)
    cout << "Yes";
else 
    cout << "No";

}