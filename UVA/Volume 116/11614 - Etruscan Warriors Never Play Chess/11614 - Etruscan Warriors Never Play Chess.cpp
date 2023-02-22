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
        ll total;
        cout.precision(17);
        cin>>total;
        if(total==0){
            cout<<0<<endl;
            return;
        }
        //we have to find the roots of equation of n2+n=2*total
        int a=1;
        int b=1;
        ll c=-1*2*total;
        ll discriminant=(b*b)-(4*a*c);
        // cout<<discriminant<<endl;
        long double x1=0;
        long double x2=0;
        if(discriminant>0){
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
            if(x1>0){
                cout<<floor(x1)<<endl;
            }
            else{
                cout<<floor(x2)<<endl;
            }

        }
        else if(discriminant==0){
            x1=-b/2*a;
            cout<<x1<<endl;
        }
        else{
            cout<<0<<endl;
        }
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