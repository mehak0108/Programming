#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    int t,n,a,b,p;
    float ans;
    cin>>t;
    while(t--){
        int counta=0,countb=0;
        cin>>n>>a>>b;
        vector<int>v;
        for(int i=1;i<=n;i++){
            cin>>p;
            v.push_back(p);
        }

        for(int i=0;i<v.size();i++){
            if(v[i]==a)
                counta++;
            if(v[i]==b)
                countb++;
        }

        ans = (float)(counta*countb)/(n*n);
        cout<<fixed<<setprecision(10)<<ans<<endl;
        v.clear();

    }
    
}