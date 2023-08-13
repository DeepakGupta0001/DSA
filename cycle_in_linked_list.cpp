#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;
class node
{
public:
    int val;
    node *next;
    node() : val(0), next(NULL) {}
    node(int x) : val(x), next(NULL) {}
    node(int x, node *next) : val(x), next(next) {}
};

node *insertathead(node *&head,int v){
    node *a1=new node(v);
    head=a1;
return head;
}

node *insert(){
    node *head=NULL;
    
    cout<<"enter the number of element :";
    int e;
    cin>>e;
  node *temp;
    while(e--){int v;
        cout<<"enter the element :";
        cin>>v;
        if(head==NULL){
          head=insertathead(head,v);
          temp=head;
          continue;
}
        node *a=new node(v);
      temp->next=a;
        temp=temp->next;
    }
    return head;
}

void display(node *&head){node *temp=head;
while(temp!=NULL){
cout<<temp->val<<endl;
temp=temp->next;
}}

void makecycle(node *&head,int p){
    node *temp=head;
    node *tem;
    int c=1;
    while(temp->next!=NULL){
        if(p==c){
            tem=temp;
        }
        temp=temp->next;c++;
    }
    temp->next=tem;
}

bool findcycle(node *&head){
    node *rat=head;
    node *tor=head;

    while(rat!=NULL && rat->next!=NULL){


        rat=rat->next->next;
        tor=tor->next;
        if(tor==rat){
    return true;
}
    }
    return false;
}

void removecycle(node *head){node *rat=head;
    node *tor=head;

    do{
rat=rat->next->next;
        tor=tor->next;
        
}while(tor!=rat);
    rat=head;
    while(tor->next!=rat->next){        rat=rat->next;
        tor=tor->next;
}
tor->next=NULL;
}
int main(){
      node *head=insert();
    cout<<"element are :";
display(head);
cout<<"enter position :";
int p;
cin>>p;
makecycle(head,p);
cout<<findcycle(head)<<endl;
removecycle(head);
cout<<findcycle(head)<<endl;
    return 0;
}