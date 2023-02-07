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


int x,sum=0;
cout << "coordinates of min elements:" << endl;

for(int j=0;j<m;j++){
     int min=a[0][j];
    for(int i=0;i<n;i++){
        if(a[i][j]<min){
            min=a[i][j];
            x=i;
        }
    }
    sum+=min;
    cout << x+1 << ";" << j+1;
    cout << endl;
}
cout << endl;

cout << "Their sum:" << endl;
cout << sum;
}