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
        vector<int> A(n);
        REP(i, 0, n)
        {
            cin >> A[i];
            sum += A[i];
        }
        if(sum % 3 == 0) {
            cout<<"0"<<endl;
            continue;
        }

        bool flag = 0;
        for(int e : A)
            if((sum - e)%3 == 0) {
                cout<<"1"<<endl;
                flag = 1;
                break;
            }
        if(!flag)
            cout<<((sum+1)%3 == 0?"1":"2")<<endl;

    }    
    return 0;
}