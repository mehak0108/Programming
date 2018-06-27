#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    float c;
    while(1){
        cin>>c;
        if(c == 0.00)
            break;
        else{
            float len= 0.00;
            int n=0;
            while(len<c){
                n++;
                len+=1.00/(1.00+n);
            }
            cout<<n<<" card(s)"<<endl;

        }

    }
}
