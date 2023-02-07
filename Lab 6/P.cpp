#include <iostream>
#include <cmath>
using namespace std;

void topositive(int a){
    cout << abs(a);
}

int main(){
    int a;
    cin >> a;

    topositive(a);
}