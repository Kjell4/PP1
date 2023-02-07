#include <iostream>

using namespace std;

int main(){

long long n;
bool a=false;
cin >> n;

for(int i=1;i<=n;i++){
    if((i*i)==n){
        a=true;
        break;
    }
    else{a=false;}
}

if(a==true){
    cout << "Perfecto";
}
else{cout << "Simple";}

}