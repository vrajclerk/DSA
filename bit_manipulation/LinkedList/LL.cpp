#include<iostream>
#include<vector>

using namespace std;

class Node{
    public:
    int data;
    Node* next;


    public:
    Node(int data, Node* next1){
        this->data=data;
        next=next1;
    }

    public:
    Node(int data){
        this->data=data;
        next=NULL;
    }

};
//arr to LL
Node*ConvertArrtoLL(vector<int> &arr){
    Node* head=new Node(arr[0]);
    Node* mover=head; //mover standing at first place
    for(int i=1;i<arr.size();i++){
        Node*temp=new Node(arr[i]);  //storing valus in temp
        mover->next=temp; //mover to point to next temp
        mover=temp;
    }
    return head;

}
//lengrh
int lengthOfLL(Node*head){
    int count=0;
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<""<<endl;
        count++;
        temp=temp->next;
    }
    return count;

}
//search element
int checkIfpresent(Node*head,int val){
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
int main(){
    vector<int> arr={1,2,3,4,5};
    Node* head=ConvertArrtoLL(arr);
    // cout<< head->data<<endl;

    //Travesal
    // Node*temp=head;
    // while(temp!=NULL){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<lengthOfLL(head)<<endl;

    cout<<checkIfpresent(head,5)<<endl;
}
