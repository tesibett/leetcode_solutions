/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *l3=new ListNode((l1->val + l2->val)%10);
        ListNode *tail=l3;

        int carry=(l1->val + l2->val)/10;

        l1=l1 ->next;
        l2=l2->next;

        while(l1 !=nullptr && l2 !=nullptr){
            int number=(l1->val +l2->val +carry)%10;
            carry=(l1->val + l2->val + carry)/10;
            ListNode *newNode=new ListNode(number);
            tail->next=newNode;
            tail =newNode;
            
           l1= l1 ->next;
            l2=l2->next;
           
        }

           
            while(l1==nullptr && l2 !=nullptr){
                int number=(l2->val +carry)%10;
                carry=(l2->val +carry)/10;
                ListNode * newNode=new ListNode(number);
                tail->next=newNode;
                tail=newNode;
               l2= l2->next;
            }
            while(l2==nullptr && l1 !=nullptr){
                int number=(l1->val +carry)%10;
                carry=(l1->val +carry)/10;
                ListNode * newNode=new ListNode(number);
                tail->next=newNode;
                tail=newNode;
               l1= l1->next;
            }
            if (carry > 0) {
           ListNode * newNode = new ListNode(carry);
            tail->next = newNode;
            }

        return l3;

        
    }
};