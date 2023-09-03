#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int prime(long long n) {
    long long i = 2;
    while(i * i <= n) {
        if(n % i == 0)  return 0;
        i++;
    }
    return 1;
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    long long n;
    scanf("%lld", &n);
    printf(prime(n)?"yes":"no");
    return 0;
}