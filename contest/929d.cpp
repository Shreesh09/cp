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
        vector<int> A(n);
        int d = 0;
        REP(i, 0, n)
        {
            cin >> A[i];    
        }

        sort(A.begin(), A.end());
        // printA(A);
        bool flag = false;
        if(A[0] == A[1]) {
            for(int i = 2; i < n; i++) {
                if(A[i] % A[0] != 0) {
                    flag = true;
                    break;
                }
            }
        } else {
            flag = true;
        }

        cout<<(flag?"YES":"NO")<<endl;

    }    
    return 0;
}