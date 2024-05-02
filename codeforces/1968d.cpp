#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef long long ll;
 
void init_code() {
    #ifndef ONLINE_JUDGE
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
}
 
int main(void) {
    init_code();
    int test = 0;
    cin >> test;
    while(t--) {
        ll n, k, a, b;
        cin >> n >> k >> a >> b;
        a--; b--;
        vector<ll> P(n), A(n);
        vector<ll> visB(n, 0), visS(n, 0);

        REP(i, 0, n) {
            cin >> P[i];
            P[i]--;
        }

        ll maxA = INT_MIN;
        REP(i, 0, n) {
            cin >> A[i];
            maxA = max(maxA, A[i]);
        }

        ll maxB = INT_MIN, maxS = INT_MIN;

        ll sum = 0;
        ll t = k;
        visB[a] = 1;
        while(t > 0) {
            maxB = max(maxB, sum + t*(A[a]));
            sum  += A[a];
            if(visB[P[a]])
                break;
            visB[P[a]] = 1;
            a = P[a];
            t--;
        }

        t = k;
        sum = 0;
        visS[b] = 1;
        while(t > 0) {
            maxS = max(maxS, sum + t*(A[b]));
            sum  += A[b];
            if(visS[P[b]])
                break;
            visS[P[b]] = 1;
            b = P[b];
            t--;
        }

        if(maxB == maxS) {
            cout<<"Draw"<<endl;
        } else if(maxB > maxS) {
            cout<<"Bodya"<<endl;
        } else {
            cout<<"Sasha"<<endl;
        }
    }
    return 0;
}