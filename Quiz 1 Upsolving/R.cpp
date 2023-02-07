#include <iostream>

using namespace std;

int main(){

int n,a,sum=0,product=1;
cin >> n;

a=n;

while(n!=0){
    sum+=(n%10);
    n/=10;
} 

while(a!=0){
    product*=(a%10);
    a/=10;
}

cout << sum + product ;

}