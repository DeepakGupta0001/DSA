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
tree *preorders(int a[],int b[],int s,int n){
    static int c=0;
    if(s>n){return NULL;}
    int v=a[c];c++;
    tree *h=new tree(v);
    if(s==n){return h;}
    int pos=sea(b,s,n,v);
    h->left=preorders(a,b,s,pos-1);
    h->right=preorders(a,b,pos+1,n);
    return h;
}
void write(tree *h){
    if(h==NULL){return;}
    cout<<h->data;
    write(h->left);write(h->right);
}
int main(){
   int preorder[]={1,2,4,8,9,5,3,6,7};
   int inorder[]={8,4,9,2,5,1,6,3,7};
tree *head=preorders(preorder,inorder,0,8);
write(head);
    return 0;
}