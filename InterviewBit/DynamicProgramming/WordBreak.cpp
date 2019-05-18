int Solution::wordBreak(string s, vector<string> &dict) {
    
    int n=s.length();
    //using an array to mark subarray from 0 to i can be broken or not
    if(n==0)
        return true;
    bool v[n];
    memset(v,false,sizeof(v));
    
    v[0]=true;
    
    for(int i=0;i<n;i++){
        string w=s.substr(0,i+1); //substring from index 0 and length i+1 
        v[i]=(find(dict.begin(),dict.end(),w)!=dict.end());
        
        if(v[i]) continue;
        
        //since v[i] is false breaking it into 0 j i
        for(int j=i-1;j>=0;j--){     // giving tle if j is from 0 to j<i why???
            if(v[j]){
                // checking for other substring
                string u=s.substr(j+1,i-j);
                v[i] = (find(dict.begin(),dict.end(),u)!=dict.end());
                if(v[i])
                    break;
            }
        }
    }
    return v[n-1];
    
}
