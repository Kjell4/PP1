#include <iostream>
using namespace std;

void toup(char a){
    cout << char(toupper(a));
}

int main(){
    char a; cin >> a;

    toup(a);
}