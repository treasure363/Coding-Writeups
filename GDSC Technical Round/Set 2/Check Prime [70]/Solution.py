def prime(n):
    i = 2
    while(i*i <= n):
        if n % i == 0:
            return False
        i += 1
    return True

n = int(input())
print("yes" if prime(n) else "no")
 