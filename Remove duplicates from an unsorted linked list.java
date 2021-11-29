class Solution
{
    //Function to remove duplicates from unsorted linked list.
    public Node removeDuplicates(Node head) 
    {
         HashSet<Integer> hs = new HashSet<>();
         Node curr = head, prev= null;
         while(curr!=null){
             int currVal = curr.data;
             if(hs.contains(currVal)){
                 prev.next = curr.next;
             } else {
                 hs.add((currVal));
                 prev = curr;
             }
             
             curr = curr.next;
         }
         return head;
    }
}
