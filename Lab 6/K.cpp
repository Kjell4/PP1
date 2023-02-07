#include <iostream>
using namespace std;

int sumdigits(int a){
    int sum=0;
    int b;
    while(a!=0){
        b=a%10;
        sum+=b;
        a/=10;
    }
    return(sum);
}

int main(){

   int a;
   cin >> a;

   cout << sumdigits(a); 
}