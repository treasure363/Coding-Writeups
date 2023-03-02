# Question
  
## Even or Odd Digits' Sum:
In mathematics, the `digit sum` of a given integer is the sum of all its digits, e.g., the digits sum of 84001 is calculated as 8+4+0+0+1 = 13, the digit sum of 158 is 1+5+8 = 14.  
  
Rohan's teacher has asked him to write a function (method) that takes as input a positive number and performs digitSum of either only the even digits or only the odd digits in the given number, based on the option `even` or `odd`.  
The function will take two input parameters \-  
* the first parameter will be an integer number representing the number of whose digitSum needs to be found  
* the second parameter will be a string representing the option, which will be either `even` or `odd` 
  
**Example 1:** If the given number is 9625, and the option is `odd`, we must add only the odd digits, i.e. `[9 + 5 = 14]`  
**Example 2:** If the given number is 2134, and the option is `even`, we must add only the even digits, i.e. `[2 + 4 = 6]`  
  
**Assumptions:**
* `1 <= input1 <= 25000`
* `input2` will be a string either `even` or `odd` 
  
# Link to Question:
https://tests.mettl.com/authenticateKey/a05abbcf
  
# Solution  

### Analysing Question:
Basically the question tells us to sum up the even digits or odd digits of a number and return it. We can analyze the Examples to understand it better. 

### Pseudo Code:
```
EvenOddDigitsSum(input1, input2):
    Set digitSum = 0
    If input2 = "even"
        Set flag = True
    Else
        Set flag = False
    While input1 > 0
        digit = input1 MOD 10
        If digit = flag
            digitSum = digitSum + digit
        input1 = input1 / 10
    return digitSum
```
TC: O(n)&emsp;where n is number of digits in `input1`  
SC: O(1)

### Approach:
* Initialize digitSum to 0 since we are adding values
* Consider a flag variable which assumes the given input2 as "even"
* Run a loop to extract digits of input1
    * Inside the loop
    * Check if the digit passes the flag and add it to digitSum  
    [We can even directly check if input2 == "even" and d%2==0 and vice-versa]
* digitSum now contains our answer

### Concept used:
* Modulus
* Flag Checking
* Digit Sum

### Similar Questions:
* [Magic Number](https://practice.geeksforgeeks.org/problems/sum-of-digit-modified1409/1)
* [Perfect Number](https://practice.geeksforgeeks.org/problems/perfect-number3759/1)
* [Spy Number](https://www.geeksforgeeks.org/spy-number-sum-and-products-of-digits-are-same/)
* [Armstrong Number](https://practice.geeksforgeeks.org/problems/armstrong-numbers2727/1)
* [Happy Number](https://leetcode.com/problems/happy-number/)
