def fact(n):
    if n==0:
        return 1
    
    return n * fact(n-1)
    
n= int(input())
ans= fact(n)
print("Factorial of",n,"is:",ans)