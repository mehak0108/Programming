void rightView(Node *root)
{
   if(!root) return;

   queue<Node*>q;
   q.push(root);
   q.push(NULL);
   Node *prev;
   while(q.size()!=1)
   {
       Node *tp = q.front();
       q.pop();
       
       if(tp==NULL)
       {
           q.push(NULL);
           cout<<prev->data<<" ";
           continue;
       }
       if(tp->left)
            q.push(tp->left);
        if(tp->right)
            q.push(tp->right);
            
       prev = tp;
   }
   cout<<prev->data;
}

void leftView(Node *root)
{
   queue<Node*>q;
   q.push(root);
   q.push(NULL);
   Node *prev;
   while(q.size()!=1)
   {
       Node *tp = q.front();
       q.pop();
       
       if(tp==NULL)
       {
           q.push(NULL);
           cout<<prev->data<<" ";
           continue;
       }
       
        if(tp->right)
            q.push(tp->right);
        if(tp->left)
            q.push(tp->left);
            
       prev = tp;
   }
   cout<<prev->data;
}

// Method that prints the bottom view.
void butil(Node* root, map<int,vector<int>> &m)
{
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty())
    {
        auto tmp = q.front(); q.pop();
        Node* n = tmp.first;
        int h = tmp.second;
        m[h].push_back(n->data);
        if(n->left)
            q.push({n->left,h-1});
        if(n->right)
            q.push({n->right,h+1});
    }
}
void bottomView(Node *root)
{
   map<int,vector<int>> m;
   butil(root,m);
   
   for(auto it=m.begin();it!=m.end();it++)
   {
       vector<int>v = it->second;
        cout<<v[v.size()-1]<<" ";
   }
}

//topview
void tutil(Node* root, map<int,vector<int>> &m)
{
    queue<pair<Node*,int>> q;
    q.push({root,0});
    while(!q.empty())
    {
        auto tmp = q.front();
        q.pop();
        Node* node = tmp.first;
        int d = tmp.second;
        m[d].push_back(node->data);
        if(node->left)
            q.push({node->left,d-1});
        if(node->right)
            q.push({node->right,d+1});
        
    }
}
void topView(struct Node *root)
{
    map<int,vector<int>> m;
    tutil(root,m);
    for(auto it=m.begin();it!=m.end();it++)
    {
        vector<int> v = it->second;
        cout<<v[0]<<" ";
    }
}