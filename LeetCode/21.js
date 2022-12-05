/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} list1
 * @param {ListNode} list2
 * @return {ListNode}
 */
var mergeTwoLists = function(list1, list2) {
    if (!list1 && !list2) return null;
    if (!list1) return list2;
    if (!list2) return list1;
    if (list1.val > list2.val){
        list2.next = mergeTwoLists(list1, list2.next);
        return list2;
    }
    list1.next = mergeTwoLists(list2, list1.next);
    return list1;
};
