# Question Link:
[Lonely Integer](https://www.hackerrank.com/contests/gdsc-coding-round-2023-set-1/challenges/lonely-integer) (Difficulty-Medium, 50 points)  

In the Coding Solution focus only on the lonelyinteger() method
Majority candidates got the logic correct but were unable to code.  
I'll be focusing on 2nd method rather than the brute force.  

# Method 1
Count the frequency/occurence of the elements present in the array,  
the element which is present only once is the output.  
Time Complexity: `O(n^2)`
Space Complexity: `O(1)`  

Run a nested loop to count the number of occurence.  
If the element is present only once, that is the answer.

# Method 2
We can use XOR operator, since in the question it is specified  
`where all elements but one occur twice` - Which means that except 1 element all others are present twice.  
There can be similar question like:  
***where all elements are present in even frequency except one element that is present odd number of time***  
In such cases, we can use the below logic to get the output.  

### XOR properties:  
**Commutative Property:**
- The XOR operation is commutative: A XOR B is equivalent to B XOR A.  

**Self-Inverse:**
- A XOR A = 0 for any value of A (0 or 1).  

**Bitwise Parity:**
- XOR is commonly used to determine the parity (even or odd number of 1s) in a sequence of bits.  

**Exclusive Operation:**
- XOR returns true (1) only when one of the inputs is true (1) and the other is false (0).  

**Most important one**  
XOR properties when used with 0 and 1 in Markdown format:

**XOR with 0:**
- `A XOR 0 = A` for any value `A`.

   This property means that when you XOR any value with 0, the result is always the original value (`A`). This is similar to the identity property in addition, where adding 0 to a number doesn't change the number.

**XOR with 1:**
- `A XOR 1 = NOT A` for any value `A`.

   When you XOR any value with 1, the result is the logical negation (NOT) of the original value (`A`). In other words, it flips the bits. If `A` is 0, the result is 1, and if `A` is 1, the result is 0.

These properties make XOR a versatile operation in digital logic and binary arithmetic. It is often used for flipping bits (complementing values) when XORed with 1 and leaving bits unchanged when XORed with 0.

## Solution in brief
Keeping the above properties in mind, I can derive the below logic.  
If I run a XOR operation on each of the elements in the given array then all the elements that occur twice will result in 0, and the only element that occurs once will result 1. 