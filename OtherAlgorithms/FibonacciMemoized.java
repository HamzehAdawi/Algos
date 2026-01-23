public class FibonacciMemoized {

	private static final int MAXN = 100;
	private static boolean[] found = new boolean [MAXN];   
	private static int[] memo = new int[MAXN]; 
	private static boolean flag = true;
	
	public static int fib(int n) {

		if(flag) {System.out.println("Fibonacci of " + n);}
		flag = false;
		
		if (found[n]) {	return memo[n];}
		if (n == 0) { return 0;}
		if (n == 1) {return 1;} 
		
		found[n] = true;
		memo[n] = fib(n - 1) + fib(n - 2);
		System.out.println(memo[n]);
		return memo[n];
	}
	
	public static void main(String[] args) {

		System.out.println(fib(8));
	}
}
