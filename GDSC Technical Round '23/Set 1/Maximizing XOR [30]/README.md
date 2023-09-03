# Question Link:
[Maximizing XOR](https://www.hackerrank.com/contests/gdsc-coding-round-2023-set-1/challenges/maximizing-xor) (Difficulty-Easy,30 points)  

In the Coding Solution focus only on the maximizingXor() method

# Method 1
Basic Brute Force Approach  
The basic rule of xor is:  

| A | B | A XOR B |
|---|---|---------|
| 0 | 0 |    0    |
| 0 | 1 |    1    |
| 1 | 0 |    1    |
| 1 | 1 |    0    |  

So our idea is to find such a pair of number `(a, b)` between the range `l <= a <= b <= r` where the XOR 
operation is maximised!   
Time Complexity: `O((r-l)^2)`  
Space Complexity: `O(1)`  
`Step 0`: Take user input for `l` [lower bound] and `r` [upper bound]  
`Step 1`: Assign Lowest Integer value to `ans`  
`Step 2`: a = l  
`Step 3`: Repeat `Step 3` until `a <= r`, with updation: a = a + 1  
&nbsp;&nbsp;&nbsp;&nbsp;`Step 3.1`: b = l  
&nbsp;&nbsp;&nbsp;&nbsp;`Step 3.2`: Repeat Step 3.2 until `b <= r`,  with updation: b = b + 1  
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;`Step 3.2.1`: `ans` = max(ans, a XOR b)  
`Step 4`: output `ans`  

# Method 2
Bit Manipulation  
When we direct out focus on the bits of the output, then we find that all of the bits are filled with `1`. And this is logically correct as well since our goal here is to get a maximum value through XOR of l and r. 
Basically we would want to find a xor pair has maximum no. of bits.  
eg: 1111, 111, 111111, etc
well here is a table to have a better understanding:

|  l  |  r  |  l ^ r  | bin(l ^ r) |   ans   | bin(ans) |
| --- | --- | ------- | ---------- | ------- | -------- |
| 10  | 15  |    5    |  101       |    7    |   111    |
| 11  | 100 |   111   |  1101111   |   127   | 1111111  |

Now all we need to do is get the number of bits in l ^ r, say `n`. And then set all the n bits to 1 and output that. There are many ways to do it. `<<` Left shift operator is helpful here.  
we'll count the number of bits by removing 1 bit each time until the number becomes 0, and at the same time in another variable we'll add a bit and in the end display it.  
If we follow the below logic we can easily find that maximum number.   
Time Complexity: `O(log (l ^ r))`  
Space Complexity: `O(1)`  
`Step 0`: Take user input for `l` [lower bound] and `r` [upper bound]  
`Step 1`: a = `l ^ r`   
`Step 2`: b = 1  
`Step 3`: Repeat `Step 3` until `a > 0`  
&nbsp;&nbsp;&nbsp;&nbsp;`Step 3.1`: a = a >> 1, here we are deleting a bit  
&nbsp;&nbsp;&nbsp;&nbsp;`Step 3.2`: b = b << 1, here we are appending a bit  
`Step 4`: output `b - 1`  

Initialization:  
l = 11, r = 100
a = l ^ r  
b = 1  
Everything will be shown in Binary Number System  
|  Step  |     a    |     b    | a >> 1   |   b << 1 |  |
| ------ | -------- | -------- | -------- | -------- |--|
| 0      | 1101111  | 1        |    -     |    -     |  |
| 1      | 1101111  | 1        |  110111  | 10       |  |
| 2      | 110111   | 10       |  11011   | 100      |  |
| 3      | 11011    | 100      |  1101    | 1000     |  |
| 4      | 1101     | 1000     |  110     | 10000    |  |
| 5      | 110      | 10000    |  11      | 100000   |  |
| 6      | 11       | 100000   |  1       | 1000000  |  |
| 7      | 1        | 1000000  |  0       | 10000000 |  |
| 8      | 0[stop]  | 1000000  |  0       | 10000000 |  |

a = 0  
b = 10000000  
b - 1 = 1111111 [7 set bits]  
We got our output, i.e., decimal(1111111) --> 127  
