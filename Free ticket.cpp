#include <iostream>
using namespace std;

#define INT 10000000

int main()
    {
        int c,f,x,y,p;
        cin>>c>>f;
        int a[c][c];
        for(int i=0;i<c;i++)
            for(int j=0;j<c;j++)
                a[i][j]=INT;
        while(f--)
            {
                cin>>x>>y>>p;
                x--;
                y--;
                a[x][y]=p;
                a[y][x]=p;
            }
        for(int k=0;k<c;k++){
            for(int i=0;i<c;i++){
                for(int j=0;j<c;j++){
                    if(a[i][k]+a[k][j]<a[i][j]){
                        a[i][j]=a[i][k]+a[k][j];
                        }
                    }
                }
            }

        int i,j,max=0;
        for(i<0;i<c;i++){
            for(j=0;j<c;j++){
                if(max<a[i][j] && i!=j){
                    max=a[i][j];
                    }
            }
        }

        cout<<max;

    }
