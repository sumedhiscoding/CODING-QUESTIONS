#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;
void solve(int a ,int b){
    // convert them to strings to_string()
    string nums1 , nums2;
    nums1=to_string(a);
    nums2= to_string(b);

    //reverese the strings
    for(int i=0;i<nums1.length()/2 ; i++){
        swap(nums1[i],nums1[nums1.length()-i-1]);
    }
    
    for(int i=0;i<nums2.length()/2 ; i++){
        swap(nums2[i],nums2[nums2.length()-i-1]);
    }
    //convert back to integer using stoi()
    int reversed1=stoi(nums1);
    int reversed2=stoi(nums2);
     // add them together 
     int sum = reversed1+reversed2;
     string result=to_string(sum);
     reverse(result.begin(), result.end());
     sum=stoi(result);

     cout<<sum<<endl;
     return;
}
int main()
{
    fastio;
    int N;
    cin>>N;

    while(N--){
        int a,b;
        cin>>a>>b;
        solve(a,b);
    }
    return 0;
}