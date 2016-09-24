/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
   
    struct ListNode* l3;
    struct ListNode* node;
    struct ListNode* pt;
    pt = (struct ListNode*)malloc(sizeof(struct ListNode));
    pt->next = NULL;
    l3 = pt;
    int sum;
    int k = 0;
    
    if(l1 == NULL) return l1;
    if(l2 == NULL) return l2;
    
    while(l1 != NULL || l2 != NULL || k != 0) {
       
        sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + k;
        node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = sum % 10;
        node->next = NULL;
        l3->next = node;
        l3 = node;
        k = sum / 10;
        l1 = l1 ? l1->next : l1;
        l2 = l2 ? l2->next : l2;
    }
    l3 = pt->next;
    free(pt);
    return l3;
}
