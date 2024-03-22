#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef long long int ll;
 
void init_code()
{
    #ifndef ONLINE_JUDGE
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
}
 
int main(void)
{
    init_code();
    int t = 0;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        vector<ll> A(n);
        
        int rep = 0;
        REP(i, 0, n) {
            cin >> A[i];
            rep ^= A[i];
        }

        if(n%2 == 0)
            cout<<2<<endl<<1<<" "<<n<<endl<<1<<" "<<n<<endl;
        else
            cout<<4<<endl<<1<<" "<<2<<endl<<1<<" "<<2<<endl<<2<<" "<<n<<endl<<2<<" "<<n<<endl;

    }
    return 0;
}