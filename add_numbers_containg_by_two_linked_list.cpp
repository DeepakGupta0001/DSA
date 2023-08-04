#include<iostream>
#include<vector>
#include<math.h>
#include<string>

using namespace std;
 struct ListNode {
     int val;
      ListNode *next;
     ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *b=l1,*c=l2;ListNode *a=new ListNode(0);
        int d=0;ListNode *temp=a;
    int e=0;
        while(b!=nullptr && c!=nullptr){ 
        d=b->val+c->val+e;
        e=d/10;
        ListNode *n=new ListNode(d%10);
temp->next=n;
        temp=temp->next;
        b=b->next;
        c=c->next;
        }
        while(b!=0){d=b->val+e;
        e=d/10;
        ListNode *n=new ListNode(d%10);
temp->next=n;
        temp=temp->next;
        b=b->next;
        
        
        }
        while(c!=0){d=c->val+e;
        e=d/10;
        ListNode *n=new ListNode(d%10);
temp->next=n;
        
        temp=temp->next;
        c=c->next;}
        if(e==1){ListNode *n=new ListNode(1);
temp->next=n;
        
        temp=temp->next;}
         
        ListNode *f=a->next;
    return f;
    }
int main(){
    int j,k,h;
    cout<<"enter the size of first number : ";
    cin>>j;
    
        cout<<"enter the element : ";
        ListNode *l1=new ListNode(0);
        ListNode *g=l1;
    for(int i=0;i<j;i++){cin>>h;ListNode *z=new ListNode(h);
    g->next=z;
        
        g=g->next;
    }
    
cout<<"enter the size of second number : ";
    cin>>k;
  
  cout<<"enter the element : ";
       ListNode *l2=new ListNode(0);
        g=l2;
    for(int i=0;i<k;i++){cin>>h;ListNode *z=new ListNode(h);
    g->next=z;
        
        g=g->next;
    }
 ListNode *l3=addTwoNumbers(l1->next,l2->next); 
  ListNode *v=l3;int ans=0;
while(v!=NULL){ans=ans*10+v->val;
v=v->next;
}   cout<<ans;
 g=l3;
return 0;

}