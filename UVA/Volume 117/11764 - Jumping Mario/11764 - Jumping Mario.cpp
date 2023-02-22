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
        int N;
        cin>>N;
        // cout<<"N is "<<N<<endl;
        
        vector<int> v(N);
        int n = N;
        for (int i = 0; i < n; ++i)
        {
            cin>>v[i];
        }if(N==1){
            cout<<"Case "<<count<<": "<<0<<" "<<0<<endl;
            return;
        }
        int highjump=0;
        int lowjump=0;
        for (int i = 0; i < n-1; ++i)
        {
            if(v[i+1]>v[i])
            {
                highjump++;            
            }
            if(v[i+1]<v[i]) {
                lowjump++;           
            }

        }
        cout<<"Case "<<count<<": "<<highjump<<" "<<lowjump<<endl;   
        return ;
    }
    int main()
    {
        std::ios::sync_with_stdio(false);
        int T;int count=0;
        cin>>T;
        while(T--)
        {
            count+=1;
        solve(count);
        }
        return 0;
    }