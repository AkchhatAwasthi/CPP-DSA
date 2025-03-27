#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>a[i][j];
        }
    }
    int count=0;
    while(a[2][2]!=1){
        count++;
        for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            int tempj = a[i][j];
            a[i][j]=a[i][j+1];
            
        }
    }
    }
}