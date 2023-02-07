#include <iostream>
using namespace std;

string val(string s,int k){
    int cnt=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='0' && s[i]<='9'){
            cnt++;
        }
    }
    if(cnt>=k){
        return("YES");
    }
    else{
        return("NO");
    }
}

int main(){

string s;
cin >> s;
int k;
cin >> k;

cout << val(s,k);

}
