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
        int n = 0, k;
        cin>>n;
        cin>>k;
        

        vector<int> a(n);
        REP(i, 0, n)
        {
            cin >> a[i];
        }
        
        if(n == 1)
        {
            cout << "YES\n";
            continue;
        }
        
        int flag = false;
        REP(i, 0, n-1)
        {
            if(i == 0) {
                if(a[i] > a[i+1]) 
                    if(k == 1)
                    {
                        cout<<"NO\n";
                        flag = true;
                        break;
                    }
            }
            else if(i == n-1) {
                if(a[i] < a[i-1])
                    if(k == 1)
                    {
                        cout<<"NO\n";
                        flag = true;
                        break;

                    }
            } else {
                if(a[i] < a[i-1] || a[i] > a[i+1])
                    if(k == 1)
                    {
                        cout<<"NO\n";
                        flag = true;
                        break;
                    }
            }
           
        }
        if(flag) {
            continue;
        }
        cout << "YES\n"; 
    }    
    return 0;
}


/*
1 2 3 4 5
1 2 4 5 3
1 2 4

10 3 830 14
3 10 830 14
3 10 14 830

5 6 2 3 1 8 2
5 6 1 2 3 8 2
1 5 6 2 3 8 2
1 2 5 6 3 8 2
1 2 5 6 2 3 8
1 2 2 5 6 3 8
1 2 2 3 5 6 8

*/