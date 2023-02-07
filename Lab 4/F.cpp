#include <iostream>

using namespace std;

int main(){

long long n;
cin >> n;
long long a[n+1][n+1];

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        cin >> a[i][j];
    }
}

int max=a[1][1];
int x=1,y=1;

for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(a[i][j]>max){
            max=a[i][j];
            x=i;
            y=j;
        }
    }
}

cout << x << " " << y;


}
