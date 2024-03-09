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
        map<int, int> mp;
        REP(i, 0, n)
        {
            cin >> A[i];
            mp[A[i]]++;
        }
        if(mp.size() == 1)
        {
            cout<<"Yes"<<endl;
            continue;
        }

        if(mp.size() == 2) {
            auto it = mp.begin();
            int a = it->second;
            it++;
            int b = it->second;
            if(fabs(a-b) <= 1) {
                cout<<"Yes"<<endl;
                continue;
            }
        } 

        cout<<"No"<<endl;        

    }    
    return 0;
}