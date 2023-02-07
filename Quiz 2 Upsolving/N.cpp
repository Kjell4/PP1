#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    string t[a];
    for(int i=0;i<a;i++)
    {
        cin >> t[i];
    }
    char j[100000000];
    int x=0;
    for(int i=0;i<a;i++)
    {
        for(int y=0;y<t[i].size();y++)
        {
            if(t[i][y] != '0')
            {
                j[x] = t[i][y];
                x++;
            }
        }
    }
    int c=0;
    for(int i=0;i<x/2;i++)
    {
        if(j[i] != j[x-1-c])
        {
            cout <<"NO";
            return 0;
        }
        c++;
    }
    cout <<"YES";
}