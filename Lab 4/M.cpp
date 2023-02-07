#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n;
cin >> n;
int c=1,a=0,len=n;
int m[n][n];

while(c<=n*n){

    for(int i=a;i<len;i++){
        m[a][i]=c++;
    }

    for(int i=a+1;i<len;i++){
        m[i][len-1]=c++;
    }

    for(int i=len-2;i>=a;i--){
        m[len-1][i]=c++;
    }
    for(int i=len-2;i>a;i--){
        m[i][a]=c++;
    }
    a++;
    len--;
}

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout << m[i][j] << " ";
    }
    cout << endl;
}

}
