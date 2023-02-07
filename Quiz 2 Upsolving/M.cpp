#include <bits/stdc++.h>
using namespace std;

int main(){

double a,b,k=0;
cin >> a >> b;
bool x=false;

for(int i=-60;i<=60;i++){
    if(pow(2,i)==(b/a)){
        x=true;
        k=i;
    }
}

if(x==true){
    cout << "YES" << " " << k;
}
else{
    cout << "NO";
}

}