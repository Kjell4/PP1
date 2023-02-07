#include <iostream>
using namespace std;

int main(){

string s;
cin >> s;
int sumodd=0,sumeven=0;

for(int i=0;i<s.size();i++){
    if(i%2==0){
        sumeven+=s[i];
    }
    else{
        sumodd+=s[i];
    }
}

if(sumeven==sumodd){
    cout << "YES";
}
else{
    cout << "NO";
}

}