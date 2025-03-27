// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t; 
    
//     while (t--) {
//         long long b, c, d;
//         cin >> b >> c >> d;
        
        
//         long long a = (b ^ d);  
//         if (((a | b) - (a & c)) == d) {
//             cout << a << endl;  
//         } else {
//             cout << -1 << endl; 
//         }
//     }
    
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int b=s.length();
    string result="";
    for(int i=0;i<b;i++){
        if(s[i]=='a' && s[i+1]=='b'){
            continue;
        }
        else if(s[i]=='c' && s[i+1]=='d'){
            continue;
        }
        else if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='c' && s[i+3]=='d'){
            continue;
        }
        else{
            result+=s[i];
        }
    }
    
    cout<<result.length();

}