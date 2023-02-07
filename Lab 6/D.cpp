#include <iostream>
using namespace std;

string book(int a[],int n,int k){
    bool x=false;
    for(int i=0;i<n;i++){
        if(a[i]==k){
            x=true;
        }
    }
    if(x==true){
        return("Yes");
    }
    else{
        return("No");
    }
}

int main(){

int n,k;
cin >> n;
int a[n];

for(int i=0;i<n;i++){
    cin >> a[i];
}
cin >> k;

cout << book(a,n,k);
}