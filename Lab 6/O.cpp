#include <iostream>
using namespace std;

void lucky(int a){
     int sum=0,b=0;
    b=a%10;
    while(a!=0){
        sum+=a%10;
        a/=10;
    }
    if(sum%b==0){
     cout << "Yes";   
    }
    else{
        cout << "No";
    }
    
}


int main(){

int a;
cin >> a;

lucky(a);
}