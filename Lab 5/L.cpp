#include <iostream>
using namespace std;

int main(){

string s;
cin >> s;
bool x=true;


for(int i=0;i<s.size();i++){
    if(i<s.size()-1){
    if(s[i]>=s[i+1] && s[i]!='z' && s[i]!='a'){
        x=false;
    }

    }
}

if(x==false){
    cout << "NO";
}
else{
    cout << "YES";
}

}