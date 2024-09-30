#include <bits/stdc++.h>
using namespace std;
#define ll long long

set<int> s;
map<string,int> mp;
string str[100001];

int main()
{
    int t;
    cin >> t;
    for(int i = 0;i<t;++i)
        cin >> str[i];

    for(int i = 0;i<t;++i){
        mp[str[i]]++;
        if(mp[str[i]] == 1)
            cout << "OK" << endl;
        else
            cout << str[i] << mp[str[i]]-1 << endl;
        
    }
}
