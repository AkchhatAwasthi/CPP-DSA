#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    int n;
    cin >> n;
    vector<string>s(n);

    int x=0;
    for(int i=0;i<s.size();i++){
        cin>>s[i];
        if(s[i]=="++X" || s[i]=="X++"){
            x++;
        }else if(s[i]=="--X" || s[i]=="X--"){
            x--;
        }
    }
    cout << x<<endl;
    return 0;
}