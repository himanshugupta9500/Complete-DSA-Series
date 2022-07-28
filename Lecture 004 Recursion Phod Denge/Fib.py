def fib(n):
    #Base Case
    if n<=1:
        return n
    #Bharosa
    prev= fib(n-1)
    pprev= fib(n-2)

    #tumhara Kaam 
    return prev+ pprev
  
    
n= int(input())
ans= fib(n)
print(n,"th fibonacci is:",ans)