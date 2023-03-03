#include<stdio.h>
#include<string.h>
#include<ctype.h>

int isvowel(char ch) {
    switch(ch) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':   return 1;
        default: return 0;
    }
}

int weightOfString(char* input1, int input2) {
	int ans = 0, i = 0;
    char ch;
    for(i=0; i<strlen(input1); i++) {
        if(isalpha(input1[i])) {
            if(input2)  ans += (int)(tolower(input1[i])) - 96;
            else if(!isvowel(tolower(input1[i]))) ans += (int)(tolower(input1[i])) - 96;
        }
    }
    return ans;
}