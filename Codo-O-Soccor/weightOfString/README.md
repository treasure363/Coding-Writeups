# Question
  
## Question Description:

  
# Link to Question:
https://tests.mettl.com/v2/authenticateKey/387952fc
  
# Solution  

### Analysing Question:
Basically the question tells us to add the index of the english alphabet where A=a=1, B=b=2, ..., Z=z=26 in a given sentence containing all type of characters present in the ASCII table. There's another constraint which tells us to add the vowels or not depending on the input. 

### Pseudo Code:
```
weightOfString(input1, input2):
    Set alphabetSum = 0
    i = 1
    While(i < length(input1))
        If input1[i] is an alphabet
            If input2 == 1
                alphabetSum = English index of character input1[i]
            Otherwise
                If input1[i] is not a vowel
                    alphabetSum = English index of character input1[i]
        i = i + 1

    return alphabetSum
```
TC: O(n)&emsp;where n is length of string `input1`  
SC: O(1)

### Approach:
Iterate of the given sentence and check if the current character is an alphabet or not. Then check if it a vowel along with the input2 constraint. To make it faster we can directly check if input2 requires us to add vowels or not. We can finally get the sum after a single iteration over the string.

### Concept used:
* Checking
* String Operations

### Similar Questions:
* [Vowel or Not](https://practice.geeksforgeeks.org/problems/vowel-or-not0831/1)
* [Difficulty of sentence](https://practice.geeksforgeeks.org/problems/difficulty-of-sentence5856/1)
* [All Vowels](https://www.hackerearth.com/practice/data-structures/hash-tables/basics-of-hash-tables/practice-problems/algorithm/all-vowels-2/)
* [Vowels of All Substrings](https://leetcode.com/problems/vowels-of-all-substrings/)
