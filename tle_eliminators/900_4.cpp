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
        ll a, b, n;
        cin >> a >> b >> n;
        multiset<ll> A;
        REP(i, 0, n)
        {
            ll t;
            cin >> t;
            A.insert(t);
        }

        if(a == 1) {
            cout<<1<<endl;
            continue;
        }

        ll c = 0;
        while(A.size() > 0) {
            c++;
            // cout<<c<<" "<<b<<endl;
            ll t = a - b;
            if(A.find(t) != A.end()) {
                b = a;
                A.erase(A.find(t));
            } else {
                if(*A.begin() > t) {
                    if(*A.begin() >= a) {
                        c += b-1;
                        b = a;
                        A.erase(A.begin());
                    } else {
                        c += *A.begin() - t;
                        b = a;
                        A.erase(A.begin());
                    }
                } else {
                    while(A.size() > 0) {
                        ll t2 = *A.begin();
                        if(b + t2 > a) {
                            break;
                        }
                        b += t2;
                        A.erase(A.begin());
                    }
                }
            }
            b--;
        }

        cout<<c + b<<endl;
    }
    return 0;
}