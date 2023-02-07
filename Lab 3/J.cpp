#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n;
long long m;
cin >> n >> m;
long long b[n];
int c;

for(int i=1;i<=n;i++){
    cin >> b[i];
}

    for(int i=1;i<=n;i++){
        
        if(m>=b[i]){
            c=i;
        }
    }

 cout << c;

}
