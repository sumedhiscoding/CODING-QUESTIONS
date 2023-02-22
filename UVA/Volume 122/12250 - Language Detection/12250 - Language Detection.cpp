    #include <bits/stdc++.h>
    #include <cstdio>
    // #include <cstring>
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
    void solve(string T,int count){
        if(T=="HELLO")
            cout<<"Case "<<count<<": "<<"ENGLISH";
        else if(T=="HALLO")
            cout<<"Case "<<count<<": "<<"GERMAN";
        else if(T=="HOLA")
            cout<<"Case "<<count<<": "<<"SPANISH";
        else if(T=="BONJOUR")
            cout<<"Case "<<count<<": "<<"FRENCH";
        else if(T=="CIAO")
            cout<<"Case "<<count<<": "<<"ITALIAN";
        else if(T=="ZDRAVSTVUJTE")
            cout<<"Case "<<count<<": "<<"RUSSIAN";
        else{
            cout<<"Case "<<count<<": "<<"UNKNOWN";
        }
return;
    }
    int main()
    {
        std::ios::sync_with_stdio(false);
        string T;int count=0;
        while(cin>>T)
        {
        if(T!="#"){
            count++;
            solve(T,count);
            cout<<endl;
        }
        else{
            break;
        }
        }
        return 0;
    }