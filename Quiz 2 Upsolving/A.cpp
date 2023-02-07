#include <iostream>
using namespace std;

int main(){

int n, l=0, r=0, cntl=0, cntr=0;
cin >> n;
int a[n];

for(int i=0;i<n;i++){
    cin >> a[i];
}

for(int i=0;i<n;i++){
    if(a[i]%2==0){
        l+=a[i];
        cntl++;
    }
    else{
        r+=a[i];
        cntr++;
    }
}

 cout << "Left hand magic power: " << (l*cntl);
 cout << endl;
 cout << "Right hand magic power: " << (r*cntr); 

}