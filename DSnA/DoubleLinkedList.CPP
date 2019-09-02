#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;

struct Node
{
    int data;
    struct Node* next;
    struct Node* prev;
};
struct Node* head;
struct Node* tail;

void init()
{
    head=NULL;
    tail=NULL;
}


void append(int element)
{
    struct Node* new_node;
    new_node=new Node;
    new_node->data=element;
    if(head==NULL)
    {
        head=new_node;
        new_node->prev=NULL;
        new_node->next=NULL;
        tail=new_node;
    }
    else
    {
// Doublelink tail(Node) to new_node (previous tail linked to new_node,)
        new_node->prev=tail;
        tail->next=new_node;
// MAKE new_node (next) pointing to NULL
        new_node->next=NULL;
// Make new_node as tail(Node)
        tail=new_node;
    }
}

// void insertFirst(int element)
// {
//     struct Node* new_node;
//     new_node=new node;
//     if(head==NULL)
//     {
//         head=new_node;
//         new_node->prev=NULL;
//         new_node->data=element;
//         new_node->next=NULL;
//         tail=new_node;
//     }
//     else
//     {
//         new_node->next=head;
//         new_node->data=element;
//         new_node->prev=NULL;
//         head->prev=new_node;
//         head=new_node;
//     }
// }

// void insertLast(int element)
// {
//     struct Node* new_node;
//     new_node=new node;
//     new_node->data=element;
//     if(head==NULL)
//     {
//         head=new_node;
//         new_node->prev=NULL;
//         new_node->next=NULL;
//         tail=new_node;
//     }
//     else
//     {
//         new_node->prev=tail;
//         tail->next=new_node;
//         new_node->next=NULL;
//         tail=new_node;
//     }
// }

// void insertAfter(int old, int element)
// {
//     struct Node* new_node;
//     new_node=new node;
//     struct Node* temp;
//     temp=head;
//     if(head==NULL)
//     {
//         cout<<"could not insert"<<endl;
//         return;
//     }
//     if(head==tail)
//     {
//         if(head->data!=old)
//         {
//             cout<<"could not insert"<<endl;
//             return;
//         }
//         new_node->data=element;
//         head->next=new_node;
//         new_node->next=NULL;
//         head->prev=NULL;
//         new_node->prev=head;
//         tail=new_node;
//         return;
//     }
//     if(tail->data==element)
//     {
//         new_node->next=NULL;
//         new_node->prev=tail;
//         tail->next=new_node;
//         tail=new_node;
//         return;
//     }
//     while(temp->data!=old)
//     {
//         temp=temp->next;
//         if(temp==NULL)
//         {
//             cout<<"Could not insert"<<endl;
//             cout<<"element not found"<<endl;
//             return;
//         }
//     }

//     new_node->next=temp->next;
//     new_node->prev=temp;
//     new_node->data=element;
//     temp->next->prev=new_node;
//     temp->next=new_node;
// }

// void deleteFirst()
// {
//     if(head==NULL)
//     {
//         return;
//     }
//     if(head==tail)///one element in the list
//     {
//         struct Node* cur;
//         cur=head;
//         head=NULL;
//         tail=NULL;
//         delete cur;
//         return;
//     }
//     else
//     {
//         struct Node* cur;
//         cur=head;
//         head=head->next;
//         head->prev=NULL;
//         delete cur;
//     }
// }

// void deleteLast()
// {
//     if(head==NULL) return;
//     if(head==tail)
//     {
//         struct Node* cur;
//         cur=head;
//         head=NULL;
//         tail=NULL;
//         delete cur;
//         return;
//     }
//     else
//     {
//         struct Node* cur;
//         cur=tail;
//         tail=tail->prev;
//         tail->next=NULL;
//         delete cur;
//     }
// }
// void deleteItem(int element)
// {
//     struct Node* temp;
//     temp=head;
//     if(head==tail)
//     {
//         if(head->data!=element)
//         {
//             cout<<"could not delete"<<endl;
//             return;
//         }
//         head=NULL;
//         tail=NULL;
//         delete temp;
//         return;
//     }
//     if(head->data==element)
//     {
//         head=head->next;
//         head->prev=NULL;
//         delete temp;
//         return;
//     }
//     else if(tail->data==element)
//     {
//         temp=tail;
//         tail=tail->prev;
//         tail->next=NULL;
//         delete temp;
//         return;
//     }
//     while(temp->data!=element)
//     {
//         temp=temp->next;
//         if(temp==NULL)
//         {
//             cout<<"element not found"<<endl;
//             return;
//         }
//     }
//     temp->next->prev=temp->prev;
//     temp->prev->next=temp->next;
//     delete temp;
// }

// struct Node* searchItem(int element)
// {
//     struct Node* temp;
//     temp=head;
//     while(temp!=NULL)
//     {
//         if(temp->data==element)
//         {
//             return temp;
//             break;
//         }
//         temp=temp->next;
//     }
//     return NULL;
// }

// void printList()
// {
//     struct Node* temp;
//     temp=head;
//     while(temp!=NULL)
//     {
//         printf("%d->",temp->data);
//         temp=temp->next;
//     }
//     puts("");
// }

// void printReverse()
// {
//     struct Node* temp;
//     temp=tail;
//     while(temp!=NULL)
//     {
//         cout<<temp->data<<"->";
//         temp=temp->prev;
//     }
//     cout<<endl;
// }

// void makereverse()
// {
//     struct Node* prv=NULL;
//     struct Node* cur=head;
//     struct Node* nxt;
//     while(cur!=NULL)
//     {
//         nxt=cur->next;
//         cur->next=prv;
//         prv=cur;
//         cur=nxt;
//     }
//     head=prv;
// }

// int dltfrst()
// {
//     if(head==NULL)
//     {
//         return 0;
//     }
//     int prev;
//     prev=head->data;
//     if(head==tail)///one element in the list
//     {
//         struct Node* cur;
//         cur=head;
//         head=NULL;
//         tail=NULL;
//         delete cur;
//         return prev;
//     }
//     else
//     {
//         struct Node* cur;
//         cur=head;
//         head=head->next;
//         head->prev=NULL;
//         delete cur;
//         return prev;
//     }
// }
// int dltlast()
// {
//     if(head==NULL) return 0;
//     int prev;
//     prev=tail->data;
//     if(head==tail)
//     {
//         struct Node* cur;
//         cur=head;
//         head=NULL;
//         tail=NULL;
//         delete cur;
//         return prev;
//     }
//     else
//     {
//         struct Node* cur;
//         cur=tail;
//         tail=tail->prev;
//         tail->next=NULL;
//         delete cur;
//         return prev;
//     }
// }
// void leftRotate(int x)
// {
//     for(int i=0;i<x;i++)
//     {
//         int a=dltfrst();
//         insertLast(a);
//     }
// }
// void rightRotate(int x)
// {
//     for(int i=0;i<x;i++)
//     {
//         int a=dltlast();
//         insertFirst(a);
//     }
// }

// int main()
// {
//     init();

//     int choice;
//     while(1)
//     {
//         printf("1.InsertFirst 2. InsertLast 3. InsertAfter 4.DeleteFirst 5. DeleteLast\n");
//         printf("6.SearchItem 7. PrintList 8. ReversePrint 9. DeleteItem \n");
//         printf("10. Left Rotate 11. Right Rotate 12. Exit  13.Make reverse\n");
//         cin>>choice;
//         if(choice==1)
//         {
//             int element;
//             cout<<"Enter element_";
//             cin>>element;
//             insertFirst(element);
//             printList();
//         }
//         else if(choice==2)
//         {
//             int element;
//             cout<<"Enter element_";
//             cin>>element;
//             insertLast(element);
//             printList();
//         }
//         else if(choice==3)
//         {
//             int old,new_node;
//             cout<<"Enter Old Item_";
//             cin>>old;
//             cout<<"Enter new Item_";
//             cin>>new_node;
//             insertAfter(old,new_node);
//             printList();
//         }
//         else if(choice==4)
//         {
//             deleteFirst();
//             printList();
//         }
//         else if(choice==5)
//         {
//             deleteLast();
//             printList();
//         }
//         else if(choice==6)
//         {
//             int item;
//             cout<<"Enter Item to Search_";
//             cin>>item;
//             struct Node* ans=searchItem(item);
//             if(ans!=NULL) cout<<"FOUND "<<ans->data<<endl;
//             else cout<<"NOT FOUND"<<endl;
//         }
//         else if(choice==7)
//         {
//             printList();
//         }
//         else if(choice==8)
//         {
//             printReverse();
//         }
//         else if(choice==9)
//         {
//             int element;
//             cin>>element;
//             deleteItem(element);
//             printList();
//         }
//         else if(choice==10)
//         {
//             int x;
//             cin>>x;
//             leftRotate(x);
//             printList();
//         }
//         else if(choice==11)
//         {
//             int x;
//             cin>>x;
//             rightRotate(x);
//             printList();
//         }
//         else if(choice==12)
//         {
//             break;
//         }
//         else if(choice==13)
//         {
//             makereverse();
//         }
//     }
// return 0;
// }