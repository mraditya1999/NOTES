/*
Remove duplicates in Unsorted linked List
(not optimized)
 Node * removeDuplicates( Node *head)
    {
     // your code goes here
        Node *temp = head;
        Node *ptr = head;

        while(ptr)
        {
            temp = ptr;
            while(temp->next)
            {
                if(ptr->data == temp->next->data)
                       temp->next = temp->next->next;
                else
                    temp = temp->next;
            }
            ptr = ptr->next;
        }
        return head;
    }
*/

/*
Remove duplicates in sorted linked List

void removeDuplicates(struct Node* head)
{
    struct Node *ptr = head;

    if(!head || !head->next)
        return;

    while(ptr != NULL && ptr->next != NULL)
    {
        if(ptr->data == ptr->next->data)
            ptr->next = ptr->next->next;
        else
            ptr = ptr->next;
    }

}
*/

/*
Reverse Linked List (iterative method)

struct Node* reverseList(struct Node *head)
    {
        struct Node *curr=head,*prev=NULL,*next=NULL;
        while(curr !=NULL)
        {
          next = curr->next;
          curr->next = prev;
          prev=curr;
          curr=next;
        }
        return prev;
    }

Reverse Linked List (recursive method)

struct Node* reverseList(struct Node *head)
    {
        struct node *new_head = NULL;
        if(head->next == NULL  || head == NULL)
            return head;
            
            new_head = reverseList(head->next);
            head->next->next = head;
            head->next = NULL;
            
            return new_head;
    }
*/

/*
Merge sort for Linked List

 Node* mergeSort(Node* head) 
    {
         //base case
        if(!head || !head->next)
            return head;
            
        // break List in two halves,after finding mid
        Node *mid = findMid(head);
        
        Node *left = head;
        Node *right = mid->next;
        mid->next = NULL;
        
        //recursive calls to sort both halves
        left = mergeSort(left);
        right = mergeSort(right);
        
        //merge both left and right halves
        Node *result = merge(left,right);
        return result;
    }
     
    Node *findMid(Node *head)
    {
        Node *slow = head;
        Node *fast = head->next;
        
        while(fast && fast->next)
        {
                slow = slow->next;
                fast = fast->next->next;                
        }
        return slow;
    }
        
    Node* merge(Node *left, Node *right)
    {
        if(!left && !right)
            return NULL;
            
        else if(!left)
            return right;
            
        else if(!right)
            return left;
            
        Node *ans = (Node*)malloc(sizeof(Node*));
        Node *temp = ans;
        
        while(left && right)
        {
            if(left->data < right->data)
            {
                temp->next = left;
                temp = left;
                left = left->next;
            }
            
            else
            {
                temp->next = right;
                temp = right;
                right = right->next;
            }
        }
        
        while(left)
        {
                temp->next = left;
                temp = left;
                left = left->next;
        }
        
        while(right)
        {
            temp->next = right;
            temp = right;
            right = right->next;
        }
        
        ans = ans->next;
        return ans;
    }
*/

/*
1)Detect cycle in a loop find 
2)Find starting point of Loop
3)remove Loop

void removeLoop(Node* head)
    {
        if(head == NULL)
            return ;
        
        Node * startOfLoop = getStartingNode(head);      
        
        if(startOfLoop ==NULL)
            return;
        Node *temp = startOfLoop;
        
        while(temp->next != startOfLoop)
            temp = temp->next;
            
        temp->next = NULL;
    }

Node* getStartingNode(Node *head)
{
    if(head == NULL)
        return NULL;
        
        Node *intersection = floydCycleDetectLoop(head);
        
        if(intersection == NULL)
            return NULL;
        
        Node *start = head;
        
        while(start != intersection)
        {
            start = start->next;
            intersection = intersection->next;
        }
       return intersection;
}

Node * floydCycleDetectLoop(Node * head)
{
    //Detect Loop and return meeting point
    if(head == NULL)
        return NULL;
        
    Node *fast = head->next;
    Node *slow = head;
        
    while(fast !=NULL &&  fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        
        if(slow == fast)
            return slow;
    }
    return NULL;
}
*/


/*
add two numbers in list

class Solution{
    
    static Node reverse(Node head)
    {
        Node prev = null;
        Node curr = head;
        Node next = null;
        
        while(curr != null)
        {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    static Node add(Node head1,Node head2)
    {
        Node ansHead = null;
        Node ansTail = null;
        int carry = 0;
        
        while(head1 != null && head2 != null)
        {
            int sum = head1.data + head2.data + carry;
            int digit = sum % 10;
            
            Node new_node = new Node(digit);
        
            if(ansHead == null)
            {
                ansHead = new_node;
                ansTail = new_node;
            }
            else
            {
                ansTail.next = new_node;
                ansTail = ansTail.next;
            }
            
            carry = sum / 10;
            head1 = head1.next;
            head2 = head2.next;
        }
        
        while(head1 != null)
        {
            int sum = carry + head1.data;
            int digit = sum % 10;
            
            Node new_node = new Node(digit);
            ansTail.next = new_node;
            ansTail = ansTail.next;
            
            carry = sum / 10;
            head1 = head1.next;
        }
        
        while(head2 != null)
        {
            int sum = carry + head2.data;
            int digit = sum % 10;
            
            Node new_node = new Node(digit);
            ansTail.next = new_node;
            ansTail = ansTail.next;
            
            carry = sum / 10;
            head2 = head2.next;
        }
        
        while(carry != 0)
        {
            int sum = carry;
            int digit = sum % 10;
            
            Node new_node = new Node(digit);
            ansTail.next = new_node;
            ansTail = ansTail.next;
            
            carry = sum / 10;
        }
        return ansHead;
    }
    static Node addTwoLists(Node first, Node second){
       
       first = reverse(first);
       second = reverse(second);

        Node res = add(first,second);
       
        return reverse(res);
    }



    *****************OR*******************

    class Solution{
    
    static Node reverse(Node head)
    {
        Node prev = null;
        Node curr = head;
        Node next = null;
        
        while(curr != null)
        {
            next = curr.next;
            curr.next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    static Node add(Node head1,Node head2)
    {
        Node ansHead = null;
        Node ansTail = null;
        int carry = 0;
        
        while(head1 != null || head2 != null || carry != 0)
        {
            int val1 = 0;
            if(head1 != null)
                val1 = head1.data;
                
            int val2 = 0;
            if(head2 != null)
                val2 = head2.data;
                
            int sum = val1 + val2 + carry;
            int digit = sum % 10;
            
            Node new_node = new Node(digit);
        
            //Inserting in start so we don't have to reverse it
            if(ansHead == null)
                ansHead = new_node;
            else
            {
                new_node.next = ansHead;
                ansHead = new_node;
            }
            
            carry = sum / 10;
            
            if(head1 != null)
                head1 = head1.next;
            if(head2 != null)
                head2 = head2.next;
        }
        return ansHead;
    }
    static Node addTwoLists(Node first, Node second){
       
       first = reverse(first);
       second = reverse(second);

        Node res = add(first,second);
       
        return res;
    }
}
*/