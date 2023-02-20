 #include <bits/stdc++.h>
 #define ll long long int
 #define fastio                        \
     ios_base::sync_with_stdio(false); \
     cin.tie(NULL)
 
 #define endl "\n"
 
 using namespace std;
 
 int main()
 {
     fastio;
     // code goes here
    //_1 algorithm   
    //_2 1)to get trailing zero multiples of 10 are necessary 
    //_2 2)multiples of 10 meaning 5 should be present 
    //_2 3)suppose we have 24 , trailing zeroes would be 24/5=4 trailing zeroes
    //_2 4)as the  {5, 10, 15 ,20} will contribute to the making of trailing zero
    //_2 5)but note{5,5*2,5*3,5*4} all these above no contain only one 5 in the factors leading to trailing zero
    //_2 6) what if our no was 26 then 26/5 = 5 but the no of trailing zeroes are 6
    //_2 7) one extra zero came from {5,10,15,20,25} = {5,5*2,5*3,5*4,5*5} counting the no of 5s we get 6
    //_4 finally the code will be add the quotient to the sum and keep dividing 
    //_4 till the no is no longer greater than 5
    ll N;cin>>N;
    while(N--)
    {
        ll sum=0;ll q=0;
        ll n;cin>>n;
        while(n>=5)
        {
            q=n/5;
            n=q;
            sum+=q;
        }
        cout<<sum<<endl;
    }
    
    
     return 0;
 }