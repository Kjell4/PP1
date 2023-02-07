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

for(int i=0;i<n;i++){
    int sum1=0;
    for(int j=0;j<m;j++){
        sum1+=a[i][j];
    }
    cout << "The sum of row number " << i+1 << " is " << sum1;
    cout << endl;
}

for(int j=0;j<m;j++){
    int sum2=0;
    for(int i=0;i<n;i++){
        sum2+=a[i][j];
    }
    cout << "The sum of column number " << j+1 << " is " << sum2;
    cout << endl;
}

}