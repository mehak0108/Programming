/*
7
add-screen Screen1 12 10 4 5 8 9
add-screen Screen1 12 10 4 5 8 9
reserved-seat Screen1 4 3 4 5 7
reserved-seat Screen1 4 3 4 5 6
get-unreserved-seats Screen1 4
get-contiguous-seats Screen1 4 2 2
get-contiguous-seats Screen1 4 3 2
   */
#include <bits/stdc++.h>
#define ONLINE_JUDGE  freopen("input","r",stdin); freopen("output","w",stdout);
using namespace std;
#define maxnum 100
class screen{
    public:
     int row;
    int seatineachrow;

    int matrix[50][50]={{0}};
    bool reserve(int r,vector<int>arr){

        for(int i=0;i<arr.size();i++ ){
            if(matrix[r][arr[i]]==1)return false;
            else matrix[r][arr[i]]=1;
        }
        return true;
    }
        vector <int> getunreservedseat(int r){
            vector<int>ans;
            cout<<r<<endl;

            for(int i=0;i<seatineachrow;i++){
              if(matrix[r][i]==0)ans.push_back(i+1);
            }

            return ans;
        }
        bool getcontiguosseats(int r,int start,int num){
        if(start-num+1<0 && start + num-1>=seatineachrow){;return false;}
        else {
                bool flag1=false;
                bool flag2=false;
            for(int i=start;i>=start-num+1;i--){
                if(matrix[r][i]==1 || matrix[r][i]==2)flag1=true;;
            }
        for(int i=start;i<=start+num-1;i++){
            if(matrix[r][i]==1 || matrix[r][i]==2)flag2=true;;
        }
        if(flag1 && flag2){;return false;}
        return true;
        }
        }

    };

int main(){

    ONLINE_JUDGE
    int t;
    cin>>t;
 screen obj[5];
 cin.ignore();
map<int,bool> screentrack;
    for(int k=0;k<t;k++){


        string input;

        getline(cin,input);

        string option;
        int i=0;
        while(input[i]!=' '){
            option.push_back(input[i]);
            i++;
        }
        i++;

        if(option=="add-screen"){

            string screenname;
                int itemp=i;
            for(i;i<itemp+6;i++){
                screenname.push_back(input[i]);

            }

            int screennum=input[i]-48;
            i++;
            while(input[i]!=' '){
                screennum=screennum*10+(input[i]-48);
                i++;
                screenname.push_back(input[i]);
            }
            i++;

            if(screentrack.find(screennum)!=screentrack.end()){
                cout<<"failure\n";

                continue;
            }
            else   screentrack[screennum]=true;;
            int rownum=input[i]-48;;
            int seatnum;
            i++;
            while(input[i]!=' '){
                rownum=rownum*10+(input[i]-48);
                i++;
            }

            i++;
            seatnum=input[i]-48;
            i++;
            while(input[i]!=' '){
                seatnum=seatnum*10+(input[i]-48);
                i++;
            }
            i++;


            obj[screennum].row=rownum;;
            obj[screennum].seatineachrow=seatnum;
            while(input[i]!='\0'){

              int  temp=input[i]-48;
              i++;
                while(input[i]!=' ' && input[i]!='\0'){
                    temp=temp*10+(input[i]-48);i++;
                }
                i++;

                for(int l=0;l<rownum;l++){
                    obj[screennum].matrix[i][temp-1]=2;
                }
            }
cout<<"success\n";

        }
        else if(option=="reserved-seat"){

            string screenname;
                int itemp=i;
            for(i;i<itemp+6;i++){
                screenname.push_back(input[i]);

            }

            int screennum=input[i]-48;
            i++;
            while(input[i]!=' '){
                screennum=screennum*10+(input[i]-48);
                i++;
                screenname.push_back(input[i]);
            }
            i++;


            int rownum=input[i]-48;;

            i++;
            while(input[i]!=' '){
                rownum=rownum*10+(input[i]-48);
                i++;
            }

            i++;



            vector<int>seats;
            while(input[i]!='\0'){

              int  temp=input[i]-48;
              i++;
                while(input[i]!=' ' && input[i]!='\0'){
                    temp=temp*10+(input[i]-48);i++;
                }
                i++;


                seats.push_back(temp-1);
            }
            if(obj[screennum].reserve(rownum-1,seats))cout<<"success\n";
            else cout<<"failure\n";

        }
        else if(option=="get-unreserved-seats"){
            string screenname;
                int itemp=i;
            for(i;i<itemp+6;i++){
                screenname.push_back(input[i]);

            }

            int screennum=input[i]-48;
            i++;
            while(input[i]!=' '){
                screennum=screennum*10+(input[i]-48);
                i++;
                screenname.push_back(input[i]);
            }
            i++;


            int rownum=input[i]-48;;

            i++;
            while(input[i]!=' ' && input[i]!='\0'){
                rownum=rownum*10+(input[i]-48);
                i++;
            }

            i++;



            vector<int>unreservedseats;
            unreservedseats=obj[screennum].getunreservedseat(rownum-1);
            for(int l=0;l<unreservedseats.size();l++){
                cout<<unreservedseats[l]<<" ";
            }
            cout<<endl;
        }
        else if(option=="get-contiguous-seats"){
                        string screenname;
                int itemp=i;
            for(i;i<itemp+6;i++){
                screenname.push_back(input[i]);

            }

            int screennum=input[i]-48;
            i++;
            while(input[i]!=' '){
                screennum=screennum*10+(input[i]-48);
                i++;
                screenname.push_back(input[i]);
            }
            i++;


            int rownum=input[i]-48;;
            int start;
            i++;
            while(input[i]!=' '){
                rownum=rownum*10+(input[i]-48);
                i++;
            }

            i++;
            start=input[i]-48;
            i++;
            while(input[i]!=' '){
                start=start*10+(input[i]-48);
                i++;
            }
            i++;


            int temp;
            while(input[i]!='\0'){

            temp=input[i]-48;
              i++;
                while(input[i]!=' ' && input[i]!='\0'){
                    temp=temp*10+(input[i]-48);i++;
                }
                i++;

            }
            if(obj[screennum].getcontiguosseats(rownum-1,start-1,temp))cout<<"success\n";
            else cout<<"failure\n";
        }
    }
}
