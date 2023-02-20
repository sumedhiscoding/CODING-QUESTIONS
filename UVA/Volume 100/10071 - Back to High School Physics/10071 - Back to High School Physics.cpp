#include<iostream>
using namespace std;
int main(){
 
    
    // For getting input from input.txt file
    freopen("input.txt", "r", stdin);
 
    // Printing the Output to output.txt file
    freopen("output.txt", "w", stdout);
int v, t;

 while(cin >> v >> t)
 {
  cout << ((v * t) * 2) << endl;
 }
   
    
    
    
    
    return 0;
}
