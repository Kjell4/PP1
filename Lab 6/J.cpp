#include <iostream>
using namespace std;

int maxi(int a[4]){
    int max=a[0];
    for(int i=0;i<4;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    return(max);
}

int main(){
int a[4];

for(int i=0;i<4;i++){
    cin >> a[i];
}

cout << maxi(a);
}