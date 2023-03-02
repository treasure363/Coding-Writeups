# Question
  
## Question Name:

  
## Link to Questions:
https://tests.mettl.com/authenticateKey/a05abbcf
  
## Solution  

### What Question Says:
Basically the questions tells us to sum up the even digits or odd digits of a number and return it. We can analyze the Examples to understand it better. 

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
TC: O(n)&emsp;where n is number of digits in input1  
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