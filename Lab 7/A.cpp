#include <iostream>
using namespace std;

int degree(int n,int a){
    if(n==0){
        return(a);
    }
    a*=2;
    degree(n-1,a);
}

int main(){
    int n;
    cin >> n;

    cout << degree(n,1);
}