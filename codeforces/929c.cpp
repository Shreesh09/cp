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
        int a, b, l;
        cin >> a >> b >> l;
        long long c = 0;
        long long tb = 1;
        set<int> s;
        while(tb <= l) {
            if(l % tb != 0) {
                tb *= b;
                continue;
            }
            int l2  = l / tb;
            long long ta = 1;
            while(ta <= l2) {
                if(l2 % ta == 0) {
                    c++;
                    s.insert(l/(ta*tb));
                }
                ta *= a;
            }
            tb *= b;
        }
        cout<<s.size()<<endl;
    }    
    return 0;
}