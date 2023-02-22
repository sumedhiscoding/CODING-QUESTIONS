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
        int count=0;
        int N;
        int nonzero=0;
        int zeroes=0;

        while(cin>>N){
            if(N==0){
                count++;
                break;
            }
            else{
                int nonzero=0;
        int zeroes=0;
                count++;
                vector<int> v(N);
                for (int i = 0; i < N; ++i)
                {
                    cin>>v[i];
                if (v[i]==0)
                {
                    zeroes++;
                }
                else{
                    nonzero++;
                }
                }
                //after the hwole array is input

            cout<<"Case "<<count<<": " <<nonzero-zeroes<<endl;
            }
        }

            return;

    }
    int main()
    {
        std::ios::sync_with_stdio(false);
        solve();
        return 0;
    }