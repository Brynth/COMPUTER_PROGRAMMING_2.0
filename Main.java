/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

package linkedlist;

public class Deletestart {

	public Node head = null;  
    public Node tail = null;  
  
   


class Node {
	int data;
	Node next;
	
	public Node(int data) {
		
		this.data = data;
		this.next = null;
		
	}
}
public void addNode(int data) {  
   
    Node newNode = new Node(data);  

  
    if(head == null) {  
        
        
    	head = newNode;  
    
        tail = newNode;  
    }  
    else 
    {  
      
        tail.next = newNode;  
    
        tail = newNode;  
    }  
}  
 public void deleteStart() {
	 
            if(head != tail) {  
                head = head.next;  
      } 
   }  
      public void displayNode() {  
   
    Node currenthead = head;  
     
    while(currenthead != null) {  
       
        System.out.print(currenthead.data + " ");  
        currenthead = currenthead.next;  
    }  
    System.out.println();  
}  

	public static void main(String[] args) {  
   
	Deletestart List = new Deletestart();
	List.addNode(1);  
    List.addNode(2);  
    List.addNode(3);  
    List.addNode(4);  
    
    	List.displayNode();
        List.deleteStart();  
       
        List.displayNode();  
}

}

