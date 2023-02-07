#include <iostream>
using namespace std;

int main(){

long long n, sum=0;
cin >> n;
long long x=n;

while(n>9){
    sum+=(n%10);
    n/=10;
}

sum=sum%10;

while(x>9){
    x/=10;   
}


if(sum==x){
    cout << "YES";
}
else{
    cout << "NO";
}

}