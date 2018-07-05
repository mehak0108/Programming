#include <bits/stdc++.h>

using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left =NULL;
        right = NULL;
    }
};

Node* buildTree(vector<vector<int>> ind){
    queue<Node*> q;
    Node *n = new Node(1);
    q.push(n);
    int i=0;
    while(!q.empty()){
        Node* c = q.front();
        q.pop();
        if(i<ind.size()){
            if(ind[i][0]!=-1){
                Node *a = new Node(ind[i][0]);
                q.push(a);
                if(a->data!=-1)
                    c->left = a;
            }
            
            if(ind[i][1]!=-1){
                Node *b = new Node(ind[i][1]);
                q.push(b);
                if(b->data!=-1)
                    c->right = b;
            }
        }
        i++;
    }
    return n;
}
int getHeight(Node *A){
    if(!A)
        return 0;
    return 1+max(getHeight(A->left),getHeight(A->right));
}

void inOrder(Node *root, vector<int>&v){
    if(!root)
        return;
    inOrder(root->left,v);
    v.push_back(root->data);
    //cout<<root->data<<" ";
    inOrder(root->right,v);
}

/*void getNode(Node *root,int i, vector<Node*>&v){

    if(!root)
        return;
    if(i==0){
        v.push_back(root);
        //cout<<root->data<<" ";
    }
    else{
        getNode(root->left,i-1,v);
        getNode(root->right,i-1,v);
    }
}*/

void levelorder(Node *root,int k){
    if(!root)
        return;
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level= 1;
    while(!q.empty()){
        Node *tmp = q.front();
        q.pop();
        if(tmp == NULL){
            if(!q.empty())
                q.push(NULL);
            level++;
        }
        else{
            if(level == k){
                Node *ex = tmp->left;
                tmp->left = tmp->right;
                tmp->right = ex;
            }
            if(tmp->left)
                q.push(tmp->left);
            if(tmp->right)
                q.push(tmp->right);
        }
    }
}

vector<int> task(int h,int k, Node* root){
    int j=1;
    vector<int> b;
    for(int i=k;i<=h;i=k*j){
        levelorder(root,i);
        j++;
    }
    inOrder(root,b);
    return b;
    
}

vector<vector<int>> swapNodes(vector<vector<int>> indexes, vector<int> queries) {

    vector<vector<int>> vec;
    vector<int> v;
    Node * tree = buildTree(indexes);
    int h = getHeight(tree);
    //cout<<h;
    //inOrder(tree,v);
    for(int i=0;i<queries.size();i++){
        int k = queries[i];
        v = task(h,k,tree);
        vec.push_back(v);
    }
    return vec;
}

int main(){
    ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    vector<vector<int>> in{ {2,3},{4,-1},{5,-1},{6,-1},{7,8},{-1,9},{-1,-1},{10,11},{-1,-1},{-1,-1},{-1,-1}};  
    vector<int> q{2,4};
    vector<vector<int>> ans = swapNodes(in,q);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++)
            cout<<ans[i][j]<<" ";
            cout<<endl;
    }
}