#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    char a;
    int c = 1, mx = 0;
    if(s.size() == 1)
    {
        cout << s << " " << 1;
        return 0;
    }
    for(int i = 0; i < s.size() - 1; i++)
    {
        if(s[i] == s[i + 1])
        {
            c += 1;
        }
        else
        {
            if(c > mx)
            {
                a = s[i];
                mx = c;
            }
            c = 1;
        }
    }
    if(s[s.size() - 1] == s[s.size()-2])
    {
        if(c > mx)
        {
            cout << s[s.size() - 1] << " " << c;
            return 0;
        }
    }
    cout << a << " " << mx;
}