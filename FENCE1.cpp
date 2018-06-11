#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

#define PI 3.14159

int main(){
    while(1){
        int l; float area;
        cin>>l;
        if(l==0)
            break;
        area = (float)(l*l)/(2*PI);
        cout<<fixed<<setprecision(2)<<area<<endl;

    }
}

