import java.util.Scanner;

public class Main {
	
	public static double Pow(double x,int n) {
         // base case 
		if(n==0) {
			return 1;
		}

        //Bharosa 
        double out= Pow(x,n-1);

        //tumhara kaam
        return x*out;
	}
	
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double x = sc.nextInt();
        int n = sc.nextInt();
		double ans = Pow(x,n);
	    System.out.println("pow("+x+","+n+") is: "+ans);
	}
}