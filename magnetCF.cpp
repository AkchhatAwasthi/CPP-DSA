#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int x[n];
    int count=1;
    for(int i=0;i<n;i++){
        cin>>x[i];
        
    }
    int prev=x[0];
    for(int i=1;i<n;i++){
        if(x[i]!=prev){
            count++;
            prev=x[i];
        }
    }
    cout<<count;
    

}