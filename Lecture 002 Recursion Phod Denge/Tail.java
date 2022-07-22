import java.util.*;
 
public class Tail {
 

static void func(int n)
{
 //Base Case
 if(n==0) 
    return ;
 
 //Tumhara kaam
 System.out.println(n);

 //Bharosa(trust)
 func(n-1);
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