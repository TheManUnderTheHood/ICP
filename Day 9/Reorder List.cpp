class Solution {
    public void reorderList(ListNode head) {
        ListNode temp=head;
        Stack<ListNode> stack = new Stack<>();
        while(temp !=null) {
            stack.push(temp);
            temp=temp.next;
            }       
        int n=stack.size();
        temp=head;
        for(int i=0;i<n/2;i++){
            ListNode last=stack.pop();     
            last.next=temp.next;          
            temp.next=last;                
            temp=last.next;                
        }
        temp.next=null;
    }
}