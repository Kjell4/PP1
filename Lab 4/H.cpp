#include <iostream>

using namespace std;

int main(){

int n,m;

cin >> n >> m;
int a[n][m];
int b[n];

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin >> a[i][j];
    }
}

for(int i=0;i<n;i++){
    int sum=0;
    for(int j=0;j<m;j++){
        sum+=a[i][j];
    }
    b[i]=sum;
}

int min=b[0];
int index;

for(int i=0;i<n;i++){
    if(b[i]<min){
        min=b[i];
        index=i;
    }
}

cout << index+1;

}