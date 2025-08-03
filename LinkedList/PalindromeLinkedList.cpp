// LC-234
// https://leetcode.com/problems/palindrome-linked-list/

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
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr){
            fast = fast->next;
            if(fast->next != nullptr){
                fast = fast->next;
            }
            else {
                break;
            }
            slow = slow->next;
        }

        ListNode* curr = slow->next;
        slow->next = nullptr;

        ListNode* prev = nullptr;
        while(curr != nullptr){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;

        }
        
        slow->next = prev;

        ListNode* start = head;
        slow = slow->next;

        cout<<endl;
        while(slow != nullptr){
            if(start->val != slow->val){
                return false;
            }
            start = start->next;
            slow = slow->next;
        }

        return true;

        
    }
};