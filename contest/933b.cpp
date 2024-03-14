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
        REP(i, 0, n)
        {
            cin >> A[i];
        }

        int i = 1;
        bool flag = true;
        while(i < n-1) {
            if(A[i-1] == 0) {
                i++;
                continue;
            }
            if(A[i-1] < 0) {
                flag = false;
                break;
            }
            A[i] -= 2 * A[i-1];
            A[i+1] -= A[i-1];
            A[i-1] = 0;
        }

        if(flag && A[n-1] == 0 && A[n-2] == 0) {
            cout<<"YES"<<endl;
        } else {
            cout<<"NO"<<endl;
        }

    }
    return 0;
}