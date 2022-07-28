import java.util.Scanner;

public class Main {
	
	public static int fib(int n) {
         // base case 
		if(n<=1) {
			return n;
		}

       //Bharosa 
       int prev= fib(n-1);
       int pprev= fib(n-2);

       //Tumhara kaam

       return prev + pprev;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int ans = fib(n);
	    System.out.println(n + "th fibonacci is : "+ans);
	}
}