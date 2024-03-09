#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

void init_code()
{
    #ifndef ONLINE_JUDGE
        freopen("in.txt", "r", stdin);
        freopen("out.txt", "w", stdout);
    #endif
}

int main(void)
{
    init_code();
    int t = 0;
    cin >> t;
    while(t--)
    {
        int n, x, y;
        cin >> n;
        cin >> x >> y;

        vector<int> a(n);
        map<pair<int,int>, int> mp;
        REP(i, 0, n) {
            cin>>a[i];
            mp[{a[i]%x, a[i]%y}]++;
        }

        long long count = 0;
        for(int i = 0; i < n; i++) {
            mp[{a[i]%x, a[i]%y}]--;
            count += mp[{(x - a[i]%x)%x, a[i]%y}];
        }

        cout<<count<<endl;
    
    }    
    return 0;
}