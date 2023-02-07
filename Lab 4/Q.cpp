#include <iostream>
using namespace std;

int main(){

int n,m;
cin >> n;
m=(2*n-1);
char a[n][m];
int p=n-1,q=n-1;

for(int i=0;i<n;i++){
    for(int j=0;j<p;j++){
        a[i][j]='.';
    }
    for(int j=p;j<=q;j++){
        a[i][j]='*';
    }
    for(int j=q+1;j<m;j++){
        a[i][j]='.';
    }
        p--;
        q++;
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout << a[i][j];
    }
    cout << endl;
}
}


