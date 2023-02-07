#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double c;
double gip(int a,int b){
    c=sqrt(a*a+b*b);
    return(c);
}


int main(){

int a,b;
cin >> a >> b;

cout << setprecision(4);
cout << gip(a,b);

}