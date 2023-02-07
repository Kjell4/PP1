#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int main(){

string s;
cin >> s;

stack <char> st;

for(int i=0;i<s.size();i++){
    if(st.empty()==true){
        st.push(s[i]);
    }
    else if(st.top()=='1' && s[i]=='1'){
        st.pop();
    }
    else{
    st.push(s[i]);
    }
}

stack <char> st2;


while(st.empty()==false){
    st2.push(st.top());
    st.pop(); 
}

while(st2.empty()==false){
    cout << st2.top();
    st2.pop(); 
}

}