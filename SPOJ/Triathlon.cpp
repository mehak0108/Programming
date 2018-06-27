#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);

    vector<pair<long,long> > time;
    long a,b,c,sum1=0, sum2=0,n,max_time;
    cin>>n;
    long tot_time[n];

    for(long i=0;i<n;i++){
        cin>>a>>b>>c;
        time.push_back(make_pair(b+c,a));
        //sum1+= time[i].first;
    }

    sort(time.begin(),time.end());

    for(long i=n-1;i>=0;i--){
        sum2+=time[i].second;
        tot_time[i] = time[i].first + sum2;
        }
    max_time = tot_time[0];
    for(long i=n-1; i>=0;i--){
        if(max_time < tot_time[i])
            max_time = tot_time[i];
        }

    cout<<max_time;
}
