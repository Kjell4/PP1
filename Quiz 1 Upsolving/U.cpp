#include <iostream>

using namespace std;

int main(){

double x,y, cnt=1;
cin >> x >> y;

while(x<y){
    x+=(x*0.1);
    cnt++;
}

cout << cnt;
}