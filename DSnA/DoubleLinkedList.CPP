#include<iostream>

using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data={}, Node * prev=nullptr,Node* next=nullptr)
        {this->data=data;this->next=next;this->prev= prev;}
    // Node(int data_g)
    //     :Node {data_g,nullptr,nullptr}{}

    void setnext(Node* next_g){this->next =next_g;}//cout<<"set Next node"<<endl;}
    void setprev(Node* prev_g){this->prev = prev_g;}//cout<<"set prev node"<<endl;}

};
// void insertAfter(Node *given_node,int data){
//     if given_node->

// }
class Dll{
public:
    Node *head;
    Node *tail;
    Dll():head{nullptr},tail{nullptr}{}
    // void Dll:: append(int data);
    void append(int data){
        if (this->head ==nullptr){
            // Node *new_node(data,nullptr,nullptr); // The scope of the new_node is inside function for this we need heap memory
            Node *new_node = new Node(data);
            this->head = new_node;
            this->tail = new_node;
        }
        else{
            Node *given_node ;
            given_node = this->tail;
            Node *new_node = new Node(data,given_node,given_node->next);
            // new_node->setprev(given_node);new_node->setnext(given_node->next); 
            given_node->setnext(new_node);
            this->tail = new_node;
        }

    }

    // void Dll:: remove_end();
    void remove_end(){
        Node * given_node =this->tail;

        given_node->prev->setnext(nullptr);
        this->tail = given_node->prev;

        cout<<"Delete last element : "<<given_node->data<<endl; 
        delete( given_node);
    }

    ~Dll();
    void print_forword (){
        Node *idx_node = this->head;
        while (idx_node != nullptr){
            cout<<idx_node->data<<  " > ";
            idx_node = idx_node->next;
        }
        cout<<endl;
    }
    void print_reverse (){
        Node *idx_node = this->tail;
        while (idx_node != nullptr){
            cout<<idx_node->data<< " < ";
            idx_node = idx_node->prev;
        }
        cout<<endl;
    }

};

Dll::~Dll(){
    Node * given_node = this->head;
    Node *next_node  = nullptr;

    while(given_node != nullptr){
        next_node = given_node->next;
        cout<<"Destructor Delete value : "<< given_node->data<<endl;
        delete(given_node);
        given_node = next_node;
    }
}
// Node * find_Node(int value){
//     Node * idx_node = this->head;
//     while (idx_node != nullptr)
//     {   
//         if (idx_node->data == value)
//         {
//             return idx_node;
//         }
//         else
//         {
//             idx_node = idx_node->next;
//         }
//     }
//     cout<<"Not Found the value "<<value <<" in List"<<endl;
//     return nullptr;// Error return type should be Node pointer
// }

int main(int argc, char const *argv[])
{  
    Dll d;
    d.append(1);
    d.append(2);
    d.append(3);
    d.append(4);
    // d.print_forword();

    d.remove_end();
    // Node *head;
    // Node *tail;
  
    // Node n1(1,nullptr,nullptr);
    // Node n2(2,&n1,nullptr);n1.setnext(&n2);
    // Node n3(3,&n2,nullptr);n2.setnext(&n3);
    // Node n4(4);n3.setnext(&n4);
    // Node n5;
    // print_forword(&n1);
    // print_reverse(&n4);
    // cout<< "Node prev add: "<<n1.prev<<" Node value : "<<n1.data<<" Node next add: "<<n1.next<<endl;
    // cout<< "Node prev add: "<<n2.prev<<" Node value : "<<n2.data<<" Node next add: "<<n2.next<<endl;
    // cout<< "Node prev add: "<<n3.prev<<" Node value : "<<n3.data<<" Node next add: "<<n3.next<<endl;
    // cout<< "Node prev add: "<<n4.prev<<" Node value : "<<n4.data<<" Node next add: "<<n4.next<<endl;
    // cout<< "Node prev add: "<<n5.prev<<" Node value : "<<n5.data<<" Node next add: "<<n5.next<<endl;
    
    return 0;
}

// class DoubleLinkList{
// // private:
// public:
//     Node *head;
//     Node *tail;
//     DoubleLinkList(){this->head=nullptr;this->tail= nullptr;}
//     void insetAfter(Node & given_node,int data){
//         if (given_node.next !=nullptr){
//             Node::Node new_node(data,given_node,given_node.next);

//         }
//     }
// };

