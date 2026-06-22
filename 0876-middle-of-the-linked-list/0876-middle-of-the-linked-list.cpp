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
    ListNode* middleNode(ListNode* head) {
        int c=0;
        ListNode* curr=head;
        while(curr!=NULL)
        {
            curr=curr->next;
            c++;
        }
        int mid=c/2;
        ListNode* temp=new ListNode;
        temp=head;
        for(int i=0;i<mid;i++)
        {
            temp = temp->next;
        }
        return temp;
    }
};