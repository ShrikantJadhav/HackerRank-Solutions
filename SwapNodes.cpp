/*Problem Statement at : https://www.hackerrank.com/challenges/swap-nodes-algo */

#include <queue>
#include <iostream>

using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int n)
    {
        data = n;
        left = NULL;
        right = NULL;
    }
};

void InOrder(struct node *root)
{
    if(! root)
        return;

    InOrder(root->left);
    cout<<root->data<<' ';
    InOrder(root->right);
}

void swapSubtreesOfLevel(node *root,int k)
{
    if(! root)
        return;

    queue<node *> Q;
    Q.push(root);
    Q.push(NULL);
    int level = 1;

    while(! Q.empty())
    {
        node *tmp = Q.front();
        Q.pop();

        if(tmp == NULL)
        {
            if(! Q.empty())
            {
                Q.push(NULL);
            }
            level++;
        }
        else
        {
            if(level == k)
            {
                node *sw = tmp->left;
                tmp->left = tmp->right;
                tmp->right = sw;
            }

            if(tmp->left)
                Q.push(tmp->left);

            if(tmp->right)
                Q.push(tmp->right);
        }
    }
}


int main() {
    int N;
    cin>>N;

    node *root = NULL;
    queue<node *> Q;
    int level = 1;

    if(N > 0)
    {
        root = new node(1);
        Q.push(root);
        Q.push(NULL);
    }

    while((N > 0) && ( ! Q.empty()))
    {
        node *tmp = Q.front();
        Q.pop();

        if(tmp == NULL)
        {
            if(!Q.empty())
                Q.push(NULL);
             level++;
        }
        else
        {
            int a,b;
            cin>>a>>b;

            if(a != -1)
            {
                tmp->left = new node(a);
                Q.push(tmp->left);
            }

            if(b != -1)
            {
                tmp->right = new node(b);
                Q.push(tmp->right);
            }
            N--;
        }
    }

    int T;
    cin>>T;

    while(T > 0)
    {
        int k;
        cin>>k;
        int itr = 2;
        int lvl = k;
        while(lvl <= level )
        {
            swapSubtreesOfLevel(root,lvl);
            lvl = itr * k;
            itr++;
        }
        InOrder(root);
        cout<<endl;
        T--;
    }
    return 0;
}


