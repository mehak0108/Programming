#include <bits/stdc++.h>
using namespace std;
#define ONLINE_JUDGE  freopen("../input","r",stdin); freopen("../output","w",stdout);

int main(){
    ONLINE_JUDGE
    int w;
    cin>>w;

    if(w == 2){
        cout<<"NO"<<endl;
        return 0;
    }

    if(w%2==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
