Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function.
  Node* node = new Node;
  node->data=data;
  node->next=NULL;
  if(position==0){
      node->next=head;
      head=node;
      return head;
    }
  Node* node1=head;
    for(int i=0;i<position-1;i++){
        node1=node1->next;
    }
    node->next=node1->next;
    node1->next=node;
    return head;
  
}
