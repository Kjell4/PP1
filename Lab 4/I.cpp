#include <iostream>
#include <cmath>
using namespace std;

int main(){

int n,m;
cin >> n >> m;
long long a[n][m];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> a[i][j];
    }
}

int x;
double y;

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        x=sqrt(a[i][j]);
        y=sqrt(a[i][j]);
        if(x==y){
            a[i][j]=sqrt(a[i][j]);
        }
    }
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout << a[i][j] << " ";
    }
    cout << endl;
}
}