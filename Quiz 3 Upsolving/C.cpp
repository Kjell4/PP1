#include <bits/stdc++.h> 
using namespace std; 

int gcd(int a, int b){ 
 while(a*b != 0){ 
  if(a > b){ 
   a = a % b; 
  } 
  else{ 
   b = b % a; 
  } 
 } 
 return a+b; 
} 
int f(int a[], int n){ 
 int cmp = 1; 
 for(int i = 0; i < n; i++){ 
  for(int j = i+1; j < n; j++){ 
     cmp = max(cmp, gcd(a[i], a[j])); 
  } 
 } 
 return cmp; 
} 
int main(){ 
 int n; 
 cin >> n; 
 int a[n]; 
 for(int i = 0; i < n; i++){ 
  cin >> a[i]; 
 } 
 cout << f(a, n) << endl; 
 return 0; 
}

