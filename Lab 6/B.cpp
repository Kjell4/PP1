#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int dif(int x,int y){
    return(abs(x-y));
}

int main(){

int n;
cin >> n;
int a[n],b[n];

for(int i=0;i<n;i++){
    cin >> a[i];
}
    for(int i=0;i<n;i++){
         cin >> b[i];
    }


for(int i=0;i<n;i++){
   cout << dif(a[i],b[i]) << " ";
}


}    