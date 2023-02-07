#include <iostream>

using namespace std;

string val(string s,int k){
    int b=0, max=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            b++;
            if(b>max){
                max=b;
            }
         }
        else{
                b=0;
            }
    }

    if(max>=k){
        return("Valid");
    }
    else{
        return("Not valid");
    }
}

int main(){

string s;   cin >> s;
int k;      cin >> k;

cout << val(s,k);
}