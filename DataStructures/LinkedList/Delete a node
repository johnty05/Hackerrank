/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    Node* node = head;
    if (position == 0){
        return node->next;
    }
    while (--position > 0){
        node = node->next;
    }
    node->next = node->next->next;
    return head;
    
}
