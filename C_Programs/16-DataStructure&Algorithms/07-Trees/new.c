/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    
    int rem1=0,rem2=0,sum1=0,sum2=0,num=0;
    struct ListNode *start = NULL,*new_node = NULL,*ptr = NULL;
    
//     if(!l1 && !l2)
//         return NULL;
        
//     while(!l1)
//     {
//         rem = (l1->val + l2->val)%10;
//         new_node->val = rem;
//         if(rem)
//         *new_node = malloc(sizeof(struct ListNode));
//         *new_node = malloc(sizeof(struct ListNode));
//         rem=rem/10;
//         l1=l1->next;
//         l2=l2->next;
//     }
    
  while(!l1)
  {
      sum1 = sum1*10 + l1->val;
      l1=l1->next;
  }
      while(!l2)
  {
      sum2 = sum2*10 + l2->val;
      l2=l2->next;
  }
    num=sum1+sum2;
    new_node = start;
    
    while(num!=0)
    {
        new_node = malloc(sizeof(struct ListNode));
        rem1 = rem2 + ((sum1+sum2)%10);
        rem2 = rem1/10;
        new_node->val = rem1;
        new_node->next =NULL;
                
        sum1 = sum1/10;
        sum2=sum2/10;
        num = num/10;
        
        if(start == NULL)
        {
            start = new_node;
            ptr = new_node;
        }
        else
        {
            ptr->next = new_node;
            ptr = ptr->next;
        }
    }
    return start;
}