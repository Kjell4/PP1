#include <iostream>
using namespace std;

int main(){

int n,cnt=0,m=0;
cin >> n;

while(cnt<=500000){
   
    cnt+=(n*0.3);
     n+=(n*0.1); 
    m++;
}

cout << m;
  
}