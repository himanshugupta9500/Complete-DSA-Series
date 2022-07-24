from numpy import double


def Pow(x,n):
    #Base Case
    if(n==0):
        return 1
    
    #Bharosa
    out= Pow(x,n-1)

    #tumhara kaam 
    return x*out

x = double(input())
n= int(input())
ans= Pow(x,n)
print("pow(",x,",",n,") is: ",ans)