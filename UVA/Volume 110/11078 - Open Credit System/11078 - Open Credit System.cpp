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
    void solve(){
        int n;cin>>n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin>>arr[i];
        }   
        // we create 2 pointer variable  max and max difference 
        int max1=INT_MIN;
        int max_difference=INT_MIN;
        for(int i=0;i<n-1;i++){   
            max1=max(max1,arr[i]);
            max_difference=max(max_difference,max1-arr[i+1]);
        }
        cout<<max_difference<<endl;
        return;
    }
    int main()
    {
        std::ios::sync_with_stdio(false);
        int T;
        cin>>T;
        while(T--)
        {
        solve();
        }
        return 0;
    }