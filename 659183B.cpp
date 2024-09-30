#include <bits/stdc++.h>
using namespace std;
#define int long long

int powr (int a, int b, int n)
{
    int ans = 1;
    while(b)
    {
        if(b & 1){
            ans = (ans*a)%n;
        }
        a = (a*a)%n;
        b /= 2;
    }
    return ans;
}


int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2 || n == 3) return 1;
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return 0;
        }
    }
    return 1;
}

signed main()
{
    int t;
    cin >> t;
    for(int tc = 1;tc<=t;++tc){

        cout<<"Case #"<<tc<<": ";
        int n;
        cin>>n;
        if(n==1)
            cout<<1<<endl;
        else{
            int ans = is_prime(n);
            if(ans)
                cout<<powr(2,n-1,n)<<endl;
            else
                cout<<((n-1)*(n-1))%n<<endl;
        }
        

        
    }

}
