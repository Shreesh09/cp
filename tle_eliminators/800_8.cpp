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
        int n, k;
        cin >> n >> k;
        vector<int> A(n);
        bool present = 0;
        REP(i, 0, n)
        {
            cin >> A[i];
            if(A[i] == k)
                present = 1;
        }

        cout << (present ? "YES" : "NO") << endl;
    }    
    return 0;
}