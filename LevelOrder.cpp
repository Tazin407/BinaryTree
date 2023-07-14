#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
   public:
   int val;
   Node *left;
   Node *right;
   Node(int val){
    this->val=val;
    this->left=NULL;
    this->right=NULL;
   }


};
void level_order(Node *root){
    // 1. pushing the value in queue manually
    queue<Node*>q;
    q.push(root);
    while(!q.empty()){
    // 2.root ke ber kore store kora
        Node *room= q.front();
        q.pop();
    //3. ja korar kore fela
        cout<< room->val<<" ";
    //4. Children guloke push kora
        if(room->left) q.push(room->left);
        if(room->right) q.push(room->right);
    }
}
int main(){
    Node *root= new Node(10);
    Node *a= new Node(20);
    Node *b= new Node(30);
    Node *c= new Node(40);
    Node *d= new Node(50);
    Node *e= new Node(60);
    Node *f= new Node(70);
    Node *g= new Node(80);
    Node *h= new Node(90);
    Node *i= new Node(100);
    
//Connections
root->left=a;
root->right=b;
a->left=c;
a->right=h;
b->right=d;
//b->left=NULL;
//c->left=NULL;
c->right=e;
d->left=f;
d->right=g;
h->right=i;
h->left=NULL;

level_order(root);


   
return 0;
}
