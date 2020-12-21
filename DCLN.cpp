#include <iostream>
#include <cstdio>
#include <bits/stdtr1c++.h>

using namespace std;

long long s,ans,m;

int main()
{
    freopen("DCLN.INP","r",stdin);
    freopen("DCLN.OUT","w",stdout);
    int n;
    cin >> n;
    s=0;
    ans=-1e9-5;
    m=1e9+5;
    for(int i=1;i<=n;i++)
    {
        int u; cin >> u;
        s+=u;
        ans=max(ans,s-m);
        m=min(m,s);
    }
    cout << ans;
}
