import java.util.*;
 
public class Head {
 

static void func(int n)
{
 //Base Case
 if(n==0) 
    return ;

 //Bharosa(trust)
 func(n-1);
 
 //Tumhara kaam
 System.out.println(n);
}
 
// Driver code
public static void main(String[] args)
{
    int n;
    Scanner sc=new Scanner(System.in);  
    n= sc.nextInt();
 
    func(n);
}
}