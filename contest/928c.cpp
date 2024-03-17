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
    vector<long long> dp(2*1e5+1, 0);
    while(t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        long long i = 0;
        for(; i < n/10; i++)
        {
            if(dp[i] != 0)
            {
                sum = dp[i];
                continue;
            }
            int prefix = 0;
            long long t = i;
            while(t > 0) {
                prefix += t%10;
                t /= 10;
            }
            sum += ((prefix+9)*(prefix+10))/2;
            if(prefix > 1)
                sum -= ((prefix-1)*(prefix))/2;
            dp[i] = sum;
            // cout<<sum<<" ";
        }

        int prefix = 0;
        long long t = i;
        while(t > 0) {
            prefix += t%10;
            t /= 10;
        }
        // cout<<prefix<<" "<<((prefix+n%10)*(prefix+n+1))/2<<endl;
        sum += ((prefix+n%10)*(prefix+n%10+1))/2;
        if(prefix > 1)
            sum -= ((prefix-1)*(prefix))/2;
        cout<<sum<<endl;
    }    
    return 0;
}