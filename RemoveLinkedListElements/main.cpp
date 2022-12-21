#include <iostream>

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* removeElements(ListNode* head, int val) {
    while(head != nullptr && head->val == val) head = head->next;
    if(head == nullptr || head->next == nullptr) return head;
    ListNode *prev = head;
    for(ListNode *next = head->next; next != nullptr; next = next->next){
        if(next->val == val){
            prev->next = next->next;
            continue;
        }
        prev = next;
    }
    return head;
}

int main(){
    //head = [1,2,6,3,4,5,6], val = 6
    ListNode l = ListNode(
        1, new ListNode(
        2, new ListNode(
        6, new ListNode(
        3, new ListNode(
        4, new ListNode(
        5, new ListNode(
        6)))))));

    for(ListNode *result = removeElements(&l,6); result != nullptr; result = result->next){
        std::cout << result->val << " ";
    }
}