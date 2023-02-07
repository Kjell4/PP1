#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(){

string a;
int n;
cin >> n;

vector <string> v;
set <string> s;

for(int i=0;i<n;i++){
    cin >> a;
    v.push_back(a);
    s.insert(a);
}

int cnt=0;
set <string>::iterator it=s.begin();
vector <int> v2;                                //счетчик

for(int i=0;i<n;i++){
    v2.push_back(0);
}

while(it!=s.end()){
    for(int i=0;i<n;i++){
        if(v[i]==*it){
            cnt++;
            v2[i]=cnt;
        }
    }
    cnt=0;
    it++;
}

for(int i=0;i<n;i++){
   if(v2[i]>1){
    cout << "user already exists" << endl;
   }
   else{
    cout << "new user added" << endl;
   }
}

}