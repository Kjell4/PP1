#include <iostream>
using namespace std;

void girls(float a, float b){
    float c;
    c=(b/a)*100;
    cout << c;
}

int main(){
    int a,b; cin >> a >> b;

    girls(a,b);
}