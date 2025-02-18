#include<iostream>
// #include<conio.h>
using namespace std;
class complex{
    int x,y;
    public:
    complex(){
        x=10;
        y=20;
    }
    complex(int a,int b){
        x=a;
        y=b;
    }
    // complex operator+(complex  c){
    //     complex temp;
    //     temp.x=x+c.x;
    //     temp.y=y+c.y;
    //     return temp;

    // }
    complex operator+(complex c){
        return complex(x+c.x,y+c.y);
    }
    void show(){
        cout<<x<<"+i"<<y;
    }
};

int main(){
    complex c1(2,3),c2(5,6),c3;
    c3=c1+c2;
    c3.show();
    return 0;
}
