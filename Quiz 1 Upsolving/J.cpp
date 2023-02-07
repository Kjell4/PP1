#include <iostream>

using namespace std;

int main(){

int costa,costb,costc,a,b,c,sum;

cin >> costa >> costb >> costc >> a >> b >> c >> sum;

if(((costa*a)+(costb*b)+(costc*c))<=sum){
    cout << "Yes";
}

else{
    cout << "No";
}
}