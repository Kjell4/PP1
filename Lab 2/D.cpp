#include <iostream>             //библиотека
#include <cmath>

using namespace std;

int main(){

int n,k;                                            //n количество k одновременное количество
cin >> n >> k;



if(n-k==1){cout << 3;}
else if(n<k){cout << 2;}

else if(n-k>k){cout << abs(2+2*((n-k)/k)+1);}
else if(n-k<k){cout << abs(2+2*((n-k+1)/k));}

}
