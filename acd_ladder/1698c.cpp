#include <bits/stdc++.h>

using namespace std;

#define REP(i, a, b) for (int i = a; i < b; ++i)
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
typedef long long int ll;
 
void init_code() {
    #ifndef ONLINE_JUDGE
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    #endif
}
 
int main(void) {
    init_code();
    int t = 0;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vector<ll> A(n);
        ll numP = 0, numN = 0, sum = 0;
        REP(i, 0, n) {
            cin >> A[i];
            sum += A[i];
            if(A[i] != 0) {
                if(A[i] > 0)
                    numP++;
                else
                    numN++;
            }
        }

        if(numP > 2 || numN > 2) {
            cout<<"NO\n";
            continue;
        }

        vector<ll> v;
        set<ll> st;
        for(int e : A) {
            if(e != 0) {
                v.push_back(e);
                st.insert(e);
            }
        }

        for(int i = 0; i < min((ll)2, n-numP-numN); i++) {
            v.push_back(0);
            st.insert(0);
        }

        // for(int e : v) {
        //     cout<<e<<" ";
        // }

        // for(int e : st)
        //     cout<<e<<" ";

        bool flag = false;
        for(int i = 0; i < v.size() && !flag; i++) {
            for(int j = i+1; j < v.size() && !flag; j++) {
                for(int k = j+1; k < v.size(); k++) {
                    // cout<<(v[i] + v[j] + v[k])<<" "<<st.count(v[i] + v[j] + v[k])<<endl;
                    if(st.find(v[i] + v[j] + v[k]) == st.end()) {
                        flag = true;
                        break;
                    }
                }
            }
        }

        if(!flag)
            cout<<"YES\n";
        else
            cout<<"NO\n"; 
    }
    return 0;
}