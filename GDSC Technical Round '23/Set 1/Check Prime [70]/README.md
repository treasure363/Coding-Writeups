# Question Link:
[Check Prime](https://www.hackerrank.com/contests/gdsc-coding-round-2023-set-1/challenges/check-prime-7-1) (Difficulty-Hard, 70 points)  

Majority candidates got the logic correct but were unable to code. Many tried to use the approach of Even/Odd number and passed most of the test cases [kudos to them as well].    
The basic brute force approach although it's correct won't work for this specific question, since the input can be as large as 1_000_000_000, i.e., 1 billion! our basic approach will fail to give the result in a valid time period and hence for 1/2 test case you might be getting Time Limit Exceeded [TLE].  
Whenever we find this type of verdict(TLE) then we should optimize our code to give the output faster. Build a different logic to make the calculation time less.  

Time Complexity: O(n)
Space Complexity: O(1)

# Method 2
There's this method called `Sieve of Eratosthenes` which is an efficient algorithm used to find all prime number. For more information go this this website and read.  
[GeeksforGeeks Sieve of Eratosthenes](https://www.geeksforgeeks.org/sieve-of-eratosthenes/)