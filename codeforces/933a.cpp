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
        int n1, n2, k;
        cin >> n1 >> n2 >> k;
        vector<int> A(n1), B(n2);
        REP(i, 0, n1)
        {
            cin >> A[i];
        }

        REP(i, 0, n2) {
            cin >> B[i];
        }

        long long count = 0;
        for(int i = 0; i < n1; i++) {
            for(int j = 0; j < n2; j++) {
                if(A[i] + B[j] <= k)
                    count++;
            }
        }

        cout<<count<<endl;

    }
    return 0;
}