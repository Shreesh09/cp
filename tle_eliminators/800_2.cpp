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
        int n = 0, x = 0;
        cin >> n;
        cin >> x;
        vector<int> a(n);

        int maxD = INT_MIN;
        int d = 0;
        REP(i, 0, n)
        {
            cin >> a[i];
            maxD = max(maxD, a[i]-d);
            d = a[i];
        }
        maxD = max(2 * (x - d), maxD);
        cout<<maxD<<endl;        

    }    
    return 0;
}


/*

3 7
1 2 5


*/