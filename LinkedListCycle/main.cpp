#include <iostream>
#include <unordered_set>

//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

bool hasCycle(ListNode *head) {
    if(head == nullptr || head->next == nullptr) return 0;

    ListNode *lower = head;
    ListNode *faster = head->next;
    while(faster != nullptr && faster->next != nullptr){
        lower = lower->next;
        faster = faster->next->next;
        if(lower == faster) return true;
    }
    return 0;
}

int main(){
    ListNode l0 = ListNode(3);
    ListNode l1 = ListNode(2);
    ListNode l2 = ListNode(0);
    ListNode l3 = ListNode(-4);
    l0.next = &l1;
    l1.next = &l2;
    l2.next = &l3;
    l3.next = &l1;
    std::cout << hasCycle(&l0) << std::endl;
}
