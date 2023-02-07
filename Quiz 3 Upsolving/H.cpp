#include <iostream>
using namespace std;

double GetPriceQualityRatio(double price, double quality){
    return(quality/price);
}

int main(){
double p,q;

int n;
cin >> n;
string t[n];
double r[n];

for(int i=0;i<n;i++){
    string s; 
    cin >> s; 
    t[i]=s;
    cin >> p >> q;
    r[i]=(GetPriceQualityRatio(p,q));
}

double max=-1; int x=0;

for(int i=0;i<n;i++){
   if(r[i]>max){
    max=r[i];
    x=i;
   }
}

cout << t[x];
}