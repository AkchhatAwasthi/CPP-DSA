#include<iostream>
#include<string>


using namespace std;
int main(){
    string s;
    cin>>s;
    string a;
    for(char c : s){
        if(c!='+'){
            a+=c;
        }
    }
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a.size()-i-1;j++){
            if(a[j]>a[j+1]){
                char temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    for(int i=0;i<a.size();i++){
        if(i==a.size()-1){
            cout<<a[i];
        }else{
            cout<<a[i]<<"+";
        }
    }
   

    return 0;
}