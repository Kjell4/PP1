#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int l=0,h=0;

    for(int i=0;i<s.size();i++){
        if(s[i]>='A' && s[i]<='Z'){
            h++;
        }
        else{
            l++;
        }
    }

cout << l << " " << h;
}