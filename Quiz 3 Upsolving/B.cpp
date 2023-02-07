#include <iostream>

using namespace std;

void truth(string s){
    string t="";
    bool x=true;
    for(int i=0;i<=s.size();i++){
       
        if(s[i]==' ' || i==s.size()){
            if(x==false){
                t="";
                x=true;
            }
            else{
            cout << t;
            cout << endl;
            t="";
            }
        }
        if(s[i]>='0' && s[i]<='9'){
        x=false;
        }

        t+=s[i];
    }
}



int main(){

string s;
getline(cin,s);

truth(s);

}