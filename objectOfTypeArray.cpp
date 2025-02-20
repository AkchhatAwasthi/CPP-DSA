#include<iostream>
using namespace std;
class rectangle{
    private:
    int l,w;
    public:
    
    void setd(int a,int b){
        l=a;
        w=b;
    }
    int getarea(){
        return l*w;
    }
    
    
};
int main(){
    int n;
    cin>>n;
    
    rectangle x[10];
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        x[i].setd(a,b);
        
    }
    cout<<"Total number of rectangles: "<<n<<endl;;
    for(int i=0;i<n;i++){
        cout<<"Area of rectangle "<<i+1<<": "<<x[i].getarea()<<endl;;
    }
    
    return 0;
}