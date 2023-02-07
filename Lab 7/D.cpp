#include <iostream>
using namespace std;

int sumofdigits(string n,int i,int sum){
    if(i==n.size()){
        return sum;
    }
    sum+=n[i]-'0';
    return sumofdigits(n,i+1,sum);
}

int main(){
    string n;
    cin >> n;

    cout << sumofdigits(n,0,0);
}

