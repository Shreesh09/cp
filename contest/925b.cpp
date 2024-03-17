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
        int n;
        cin >> n;

        vector<int> a(n);
        REP(i, 0, n) {
            cin>>a[i];
        }

        if(n == 1) {
            cout<<0<<endl;
            continue;
        }

        int i = 1, j = n-2;

        while(i < n && a[i] == a[i-1]) {
            i++;
        }

        if(i == n)
        {
            cout<<0<<endl;
            continue;
        }

        while(j >= 0 && a[j] == a[j+1]) {
            j--;
        }

        if(a[0] == a[n-1]) {
            cout<<(j-i+1)<<endl;
            continue;
        }

        if(i > n-1 - j)
            cout<<n-i<<endl;
        else
            cout<<j+1<<endl;
    
    }    
    return 0;
}