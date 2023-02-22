    #include <bits/stdc++.h>
    #include <cstdio>
    #include <cstring>
    #include <cmath>
    #include <cstring>
    #include <complex>
    #include <chrono>
    #define endl "\n"
    #define ll long long int
    #define vi vector<int>
    #define vll vector<ll>
    #define vvi vector < vi >
    #define pii pair<int,int>
    #define pll pair<long long, long long>
    #define mod 1000000007
    #define inf 1000000000000000001;
    #define all(c) c.begin(),c.end()
    #define mp(x,y) make_pair(x,y) 
    #define mem(a,val) memset(a,val,sizeof(a))
    #define eb emplace_back
    #define f first
    #define s second
    
    using namespace std;
    void solve(int count){
        int n;        cin>>n;
        vector<int> v(n);
        int max=-1;
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
            if (max<v[i])
            {
                max=v[i];
            }
        }
        cout<<"Case "<<count<<": "<<max<<endl;

    }
    int main()
    {
        std::ios::sync_with_stdio(false);
        int T;
        int count=0;
        cin>>T;
        while(T--)
        {
            count++;
        solve(count);
        }
        return 0;
    }