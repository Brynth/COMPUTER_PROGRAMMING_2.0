/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/

package com.assignment.stack;

import java.util.*;

class stack<T>{
	ArrayList<T> A;
	
	int top = -1;
	int size;
	
	stack(int size){
		this.size = size;
		this.A = new ArrayList<T>(size);
	}
	
	void push (T X) {
		if(top + 1 == size) {
			System.out.println("Stack Overflow");
		}else {
			top = top + 1;
			
			if(A.size()>top)
				A.set(top, X);
			else A.add(X);
		}
	}
	
	T top() {
		if(top == -1) {
			System.out.println("Stack Underflow");
			return null;
		}
		else {
			return A.get(top);
		}
	}
	
	void pop() {
		if(top == -1) {
			System.out.println("Stack Underflow");
		}else {
			top--;
		}
	}
	
	boolean empty() {
		return top == -1;
		
	}
	
	public String toString() {
		String ans = "";
		
		for(int i = 0; i < top; i++) {
			ans += String.valueOf(A.get(i)) + " ";
		}
		
		ans += String.valueOf(A.get(top));
		return ans;
	}
	
	public String remove(String str, String word1, String word2) {
        String strSplit[] = str.split(" ");
        String new_str = "";
        for (String words : strSplit) {
            if (!words.equals(word1) && !words.equals(word2)) {
                new_str += words + " ";
            }
        }
		return new_str;
    }
}

public class stack {
	public static void main(String[] args) {
	
		stack<String> s1 = new stack<>(9);

		s1.push("My");
		s1.push("very");
		s1.push("educated");
		s1.push("mother");
		s1.push("just");
		s1.push("serve");
		s1.push("us");
		s1.push("nine");
		s1.push("puto");
		
		System.out.println("Result after pushing: " + s1);	
		System.out.println("\nWords to remove: very & nine");
		
		
		String newStr = s1.remove(s1.toString(), "very", "nine");
		System.out.println("\n\nResult after removing: " + newStr);
		

		
	}

}