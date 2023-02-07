#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

string a;
cin >> a;
int b[10];
int max=0,min=1000000;

for(int i=0;i<10;i++){
    b[i]=0;
}

for(int i=0;i<a.size();i++){
    b[a[i]-'0']++;
}

for(int i=0;i<10;i++){
    if(b[i]==0){continue;}
    if(b[i]>max){
        max=b[i];
    }
    else if(b[i]<min){
        min=b[i];
    }
}
if(max==min){cout << "YES";}
else{cout << "NO";}
}
