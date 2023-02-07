#include <iostream>
using namespace std;

string vow(string s){
    string t="";
    for(int i=0;i<s.size();i++){
        if(s[i]!='A' && s[i]!='E' && s[i]!='O' && s[i]!='I' && s[i]!='U' && s[i]!='a' && s[i]!='e' && s[i]!='o' && s[i]!='i' && s[i]!='u'){
            t+=s[i];
        }
    }
    return(t);
}


int main(){

string s;
getline(cin,s);

cout << vow(s);


}