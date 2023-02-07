#include <iostream>             //библиотека
#include <cmath>
#include <bitset>

using namespace std;

int main(){


int n;
cin >> n;
int a = n % 2;
n = n / 2;
int b = n % 2;
n = n / 2;
int c = n % 2;
n = n / 2;
int d = n % 2;

int sum = a*8 + b*4 + c*2 + d*1;
cout << sum << endl;



}