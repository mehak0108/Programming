#include<iostream>
#include<string>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        string j,s;
        cin>>j>>s;
        int l1= j.length();
        int l2 = s.length();
        int no = 0;

            for(int i=0;i<l2;i++){
                for(int p=0;p<l1;p++){
                    if(j[p] == s[i]){
                        no++;
                        break;
                    }

                }
            }
        cout<<no<<endl;

    }
}
