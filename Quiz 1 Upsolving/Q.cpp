#include <iostream>

using namespace std;

int main(){

int a,b,c,all;
cin >> a >> b >> c;

all=a+b+c;

if(all>=70 && (a+b)>=30 && c>20){
    cout << "YES!";
}
else{
    cout << "NO.";
}


}