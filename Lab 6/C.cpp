#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int q[100],r[100];
int same(int x[],int y[],int n){
    int sum=0;
    for(int i=1;i<=100;i++){
        q[i]=0;
        r[i]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=100;j++){                
        if(x[i]==j){q[j]+=1;}}
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=100;j++){
        if(y[i]==j){r[j]+=1;}}
    }
    for(int i=1;i<=100;i++){
        if(q[i]!=0 && r[i]!=0){
        sum+=min(q[i],r[i]);}
    }
    return sum;
}


int main(){

int n;
cin >> n;
int a[n],b[n];

for(int i=1;i<=n;i++){
    cin >> a[i];
}

for(int i=1;i<=n;i++){
    cin >> b[i];
}
 
cout << same(a,b,n);

}

