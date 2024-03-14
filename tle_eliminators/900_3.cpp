#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

typedef long long int ll;
 
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
        ll  n, k, x;
        cin >> n >> k >> x;

        ll sum = (n * (n+1))/2;

        if(sum == x && k == n) {
            cout<<"YES"<<endl;
            continue;
        }

        if(sum < x) {
            cout<<"NO"<<endl;
            continue;
        }

        ll rest = sum - x;
        ll rem = n - k;
        ll s2 = (rem * (rem+1))/2;

        if(s2 > rest || (sum - ((n-rem)*(n-rem+1))/2) < rest) {
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
    }
    return 0;
}