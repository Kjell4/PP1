#include <iostream>
#include <cmath>
using namespace std;

int main(){

int n,m,k;
cin >> n >> m >> k;


for(int i=n;i<=m;i++){
    int x=sqrt(i);
    float y=sqrt(i);
    if(x==y){
        if(k==1)
            cout << i << " ";
        }
    }

for(int i=m;i>=n;i--){
    int x=sqrt(i);
    float y=sqrt(i);
    if(x==y){
        if(k==-1)
            cout << i << " ";
        }
    }
}