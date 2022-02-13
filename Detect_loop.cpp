class Result {
  static int loopInList(Node head) {
    Node slow = head, fast = head;
    while(fast!=null && fast.next!=null){
      slow = slow.next;
      fast = fast.next.next;
      if(slow == fast){
        int count=1;
        Node temp = slow;
        while(temp.next!= slow){
          count++;
          temp = temp.next;
        }
       return count;
      }
    }
    return 0;
  }
} //revised.
