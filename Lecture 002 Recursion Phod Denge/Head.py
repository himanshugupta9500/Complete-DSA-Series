def func(n):
    #Base Case
    if n == 0:
        return 
        
    #Bharosa(trust)
    func(n-1)
    
    #Tumhara kaam
    print(n)
    
n= int(input())
func(n)