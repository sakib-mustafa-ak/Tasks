#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'

// void solve(){

// }

signed main(){
    int n;
    cin>>n;

    map<string,string> mp;

    for (int i = 0; i < n; ++i)
    {
        string s1,s2;
        cin>>s1>>s2;
        if(mp[s1] != ""){
            mp[s2] = mp[s1];
            mp.erase(s1);
        }else{
            mp[s2] = s1;
            mp.erase(s1);
        }
    }

    cout<<mp.size()<<endl;
    for(auto it: mp){
        cout<<it.second<<" "<<it.first<<endl;
    }   
}