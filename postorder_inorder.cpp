#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;

class tree{public : int data;tree *left;tree *right;
     
    tree(int v){data=v;left=NULL;right=NULL;
    }

};
int sea(int b[],int s,int n,int v){
    for(int i=s;i<=n;i++){
        if(v==b[i]){
            return i;
        }
    }return -1;
}
tree *postorders(int a[],int b[],int s,int n){
    static int c=4;
    if(s>n){return NULL;}
    int v=a[c];c--;
    tree *h=new tree(v);
    if(s==n){return h;}
    int pos=sea(b,s,n,v);
    h->right=postorders(a,b,pos+1,n);
    h->left=postorders(a,b,s,pos-1);
    return h;
}
void write(tree *h){
    if(h==NULL){return;}
    cout<<h->data<<endl;
    write(h->left);write(h->right);
}
void write1(tree *h){
    if(h==NULL){return;}
    write1(h->left);
    cout<<h->data<<endl;
    write1(h->right);
}
void write2(tree *h){
    if(h==NULL){return;}
    write2(h->left);
    write2(h->right);
    cout<<h->data<<endl;
}
int main(){
   int postorder[]={4,2,5,3,1};
   int inorder[]={4,2,1,5,3};
tree *head=postorders(postorder,inorder,0,4);
cout<<"tree element in preorder way :";
write(head);
cout<<"tree element in inorder way :";
write1(head);
cout<<"tree element in postorder way :";
write2(head);
    return 0;
}