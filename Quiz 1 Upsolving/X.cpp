#include <iostream>

using namespace std;

int main(){

int a,b,c;
cin >> a >> b >> c;

if(a==b && b==c){
    cout << "NO";
    return 0;
}
else if(a==b){
    cout << "YES";
    return 0;
}
else if(a==c){
    cout << "YES";
    return 0;
}
else if(b==c){
    cout << "YES";
    return 0;
}
else{
    cout << "NO";
}
}