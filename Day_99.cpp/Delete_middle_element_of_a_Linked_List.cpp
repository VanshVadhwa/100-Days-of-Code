#include<iostream>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // if (head == nullptr || head->next == nullptr) {
        //     // Edge case: empty list or single node
        //     return nullptr;
        // }

        // ListNode* curr = head;
        // ListNode* newCurr = head;

        // int length = 0;
        // while(curr != NULL) {
        //     curr = curr->next;
        //     length++; //for[1,2,3,4], count will be 4
        // }

        // int count = 0;
        // curr = head;
        // ListNode* prev = NULL; //to keep track of the middle one
        // while(count < length/2) {
        //     prev = newCurr;
        //     newCurr = newCurr -> next;
        //     count++;
        // }

        // prev->next = newCurr -> next;
        // newCurr -> next = NULL;

        // delete newCurr;
        // return head;

        if (head == nullptr || head->next == nullptr) {
            // Edge case: empty list or single node
            return nullptr;
        }

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* prev = nullptr;

        while(fast != nullptr && fast->next != nullptr) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }

        prev -> next = slow->next;
        slow -> next = nullptr;
        delete slow;

        return head;
    }
};