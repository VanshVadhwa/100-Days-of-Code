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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // ListNode* temp = head;

        // if(temp->next == NULL) {
        //     delete head;
        //     return NULL;
        // }

        // int length = 0;
        // while(temp != NULL) {
        //     temp = temp->next;
        //     length++;
        // }
        // temp = head;

        // int toRemove = length-n;    

        // // If the node to be removed is the head
        // if (toRemove == 0) {
        //     ListNode* nextNode = head->next;
        //     delete head;
        //     return nextNode;
        // }     

        // int count = 0;
        // ListNode* prev = NULL;

        // while(count < toRemove) {
        //     prev = temp;
        //     temp = temp->next;
        //     count++;
        // }

        // prev -> next = temp -> next;
        // temp -> next = NULL;
        // delete temp;

        // return head;

        ListNode* dummy = new ListNode(0); // to handle test cases
        dummy -> next = head; //Dummy is the new head now, and we will play our complete game

        ListNode* fast = dummy;
        ListNode* slow = dummy;

        for(int i=0;i<n+1;i++) {
            if(fast == nullptr) { //means that the nth node is the first node itself
                return head;
            }
            fast = fast->next;
        }

        while(fast != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }

        ListNode* toRemove = slow->next;
        slow -> next = toRemove -> next;
        toRemove -> next = nullptr;
        delete toRemove;

        ListNode* result = dummy -> next;
        delete dummy;

        return result;
        
    }
};