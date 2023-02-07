#include <iostream>
#include <stack>

using namespace std;

int main(){

string s;
cin >> s;

stack <char> st;

int l=0,r=0;

for(int i=0;i<s.size();i++){
    if(s[i]=='('){
        st.push(s[i]);
        l++;
    }
    else{
        r++;
        if(st.empty()==true){
            cout << "NO";
            return 0;
        } 
        st.pop();
    }
}

if(l==r){
    cout << "YES";
}
else{
    cout << "NO";
}

}