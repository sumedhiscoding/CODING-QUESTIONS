#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
 
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
 
#endif
   int v,t;
   while(cin>>v>>t){
    cout<<2*v*t<<endl;
   }
  
    return 0;
}
