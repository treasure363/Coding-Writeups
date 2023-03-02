#include<stdio.h>
#include<string.h>
//Read only region start

int EvenOddDigitsSum(int input1, char* input2) {
	// Write code and remove the below exception.
    int ans = 0, d = 0;
    bool flag = strcmp(input2, "even");
    while(input1) {
        d = input1 % 10;
        ans += (d%2 == flag)? d:0;
        input1 /= 10;
    }
    return ans;
}