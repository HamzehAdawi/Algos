public class FibonacciMemoized {

	/*
		fib(8)
		├─ fib(7)
		│  ├─ fib(6)
		│  │  ├─ fib(5)
		│  │  │  ├─ fib(4)
		│  │  │  │  ├─ fib(3)
		│  │  │  │  │  ├─ fib(2)
		│  │  │  │  │  │  ├─ fib(1)
		│  │  │  │  │  │  └─ fib(0)
		│  │  │  │  │
		│  │  │  │  │   ← fib(2) stored
		│  │  │  │  │   ← fib(3) stored
		│  │  │  │  │   ← fib(4) stored
		│  │  │  │  │   ← fib(5) stored
		│  │  │  │  │   ← fib(6) stored
		│  │  │  │  │   ← fib(7) stored
		│  │  │  │  │
		│  │  │  │  └─ fib(2)   (⚡ returned from memo)
		│  │  │  └─ fib(3)      (⚡ returned from memo)
		│  │  └─ fib(4)         (⚡ returned from memo)
		│  └─ fib(5)            (⚡ returned from memo)
		└─ fib(6)               (⚡ returned from memo)
		

	*/
	
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
