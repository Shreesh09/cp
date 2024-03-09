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

        long long sum = 0;
        vector<int> a(n);
        REP(i, 0, n) {
            cin>>a[i];
            sum += a[i];
        }

        int level = sum / n;
        int balance = 0;
        for(int i = n-1; i >= 0; i--){
            // cout<<balance<<" ";
            if(a[i] > level) {
                int rid = a[i] - level;
                if(rid > balance) {
                    balance = -1;
                    break;
                } else {
                    balance -= rid;
                }
            } else if( a[i] < level) {
                balance += level - a[i];
            }
        }

        if(balance == 0) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    
    }    
    return 0;
}