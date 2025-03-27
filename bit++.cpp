#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x=0;
    string a;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a=="--X"){
            --x;
        }
        else if(a=="X--"){
                x--;
        }
        else if(a=="X++"){
            x++;
        }
        else if(a=="++X"){
            ++x;
        }
    }
    cout<<x<<endl;
}