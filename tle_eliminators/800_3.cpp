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
        vector<char> A(n);
        int totalSpaces = 0, count = 0, maxSegment = 0;
        REP(i, 0, n)
        {
            cin >> A[i];
            if(A[i] == '#') {
                maxSegment = max(maxSegment, count);
                count = 0;
            } else {
                count++;
                totalSpaces++;
            }
        }

        maxSegment = max(maxSegment, count);
        cout<< (maxSegment > 2 ? 2 : totalSpaces) << endl;
    }    
    return 0;
}