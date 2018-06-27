#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;

struct point
{
    double x,y,z;
    
};

int main(){
    int t;
    cin>>t;
    while(t--){
        point p,q,d,c;
        double r,t1,t2;
        cin>>p.x>>p.y>>p.z>>q.x>>q.y>>q.z>>d.x>>d.y>>d.z>>c.x>>c.y>>c.z>>r;
        if(d.y!=0){
            t1 = (p.y-q.y)/d.y;
        }
        else if(d.x!=0){
            t1 = (p.x-q.x)/d.x;
        }
        //double ans = min(t1,t2);
        cout<<fixed<<setprecision(10)<<t1<<endl;
    }
    
}
