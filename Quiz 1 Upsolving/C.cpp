#include <iostream>

using namespace std;

int main(){

int x,y,a,b;
cin >> x >> y >> a >> b;

if(x>=a && (x-a+y)>=b){
    cout << "Yes";
}
else{cout << "No";}

}