#include<iostream>
#include<map>

using namespace std;

int main(){

int n;
cin >> n;

map <string, int> q;

string s;
int k;


for(int i=0;i<n;i++){
  cin >> s >> k;
  q[s]+=k;
}

map <string,int>::iterator it=q.begin();

while(it!=q.end()){
    cout << it->first << " " << it->second << endl;
    it++;
}

}