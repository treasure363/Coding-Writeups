#include<stdio.h>
#include<string.h>
//Read only region start

int EvenOddDigitsSum(int input1, char* input2) {
	// Read only region end
    // Write code here
    int ans = 0, d = 0;
    int flag = strcmp(input2, "even") ? 1:0;
    while(input1) {
        d = input1 % 10;
        ans += (d%2 == flag)? d:0;
        input1 /= 10;
    }
    return ans;
}