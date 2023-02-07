#include <bits/stdc++.h>
using namespace std;

int main(){

int n, k, num=0;
cin >> n;
int a[n],b[n];

for(int i=0;i<n;i++){
    cin >> a[i];
}

for(int i=0;i<n;i++){
    cin >> b[i];
}

cin >> k;

for(int i=0;i<n;i++){
    if(k>=a[i] && k<=b[i]){
        num++;
    }
}

cout << num;

}
