import java.util.Scanner;

public class Main {
	
	public static int fact(int n) {
         // base case 
		if(n==0) {
			return 1;
		}

        //tumhara kaam and trust on recursion 
		return (n * fact(n-1));
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int ans = fact(n);
	    System.out.println("Factorial of "+n+" is : "+ans);
	}
}