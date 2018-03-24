#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){

        string a="",b="",c="";
        int a1,b1,c1;
        char d,e;
        cin>>a>>d>>b>>e>>c;
        if(a.find("machula") != string::npos){
            stringstream num(a),num1(b),num2(c);
            int y=0; int z=0;
            num1>>y;
            num2>>z;
            a1 = z-y;
            cout<<a1<<" + "<<y<<" = "<<z<<endl;

        }
        if(b.find("machula") != string::npos){
            stringstream num(a),num1(b),num2(c);
            int x = 0; int z=0;
            num >> x;
            num2>>z;
            b1=z-x;
            cout<<x<<" + "<<b1<<" = "<<z<<endl;

            }
        if(c.find("machula") != string::npos){
            stringstream num(a),num1(b),num2(c);
            int x = 0;int y=0;
            num >> x;
            num1>>y;

            c1=x+y;
            cout<<x<<" + "<<y<<" = "<<c1<<endl;

        }

    }

}
