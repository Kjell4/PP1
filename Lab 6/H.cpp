#include <iostream>
using namespace std;

string val(int a){
    bool x=true;
    while(a!=0){
        int b; 
        b=a%10;
        if(b%2!=0){
            x=false;
        }
        a/=10;
    }
    if(x==true){
        return("Valid");
    }
    else{
        return("Not valid");
    }
}

int main(){

int a;
cin >> a;

cout << val(a);
}
