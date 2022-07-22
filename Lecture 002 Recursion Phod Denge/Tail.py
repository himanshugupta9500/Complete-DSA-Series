def func(n):
    #Base Case
    if n == 0:
        return 
    #Tumhara kaam
    print(n)
    
    #Bharosa(trust)
    func(n-1)
    
n= int(input())
func(n)