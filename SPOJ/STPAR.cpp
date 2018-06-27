#include<iostream>
#include<stack>
#include<queue>
using namespace std;

int main(){
    int n;
    while(1){
    cin>>n;
    if(n==0)
        break;
    else{
        queue<int> q;
        int a;
        stack<int> s;
        for(int i=0;i<n;i++){
            cin>>a;
            q.push(a);
        }

        int c=1;
        while(!q.empty() || !s.empty()){
            if(!q.empty() && q.front() == c){
                q.pop();
                c++;
            }
            else{
                if(!s.empty() && s.top() == c){
                    s.pop();
                    c++;
                }
                else{
                    if(!q.empty()){
                        int f= q.front();
                        s.push(f);
                        q.pop();
                    }
                    else{
                        break;
                    }
                }
            }

        }
        if(c==n+1){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }

    }
    }

}
