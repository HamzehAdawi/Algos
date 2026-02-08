#include <iostream>
#include <vector>

using namespace std;

class FibonacciMemoized {
	public:
		bool solved[100] = {false};
		int solutions[100];  
		
		int fibMem(int n) {

			if (n == 0) {return 0;}
			if (n == 1) {return 1;}
			
			if (solved[n]) {
				return solutions[n];
			}

			solved[n] = true;
			solutions[n] = fibMem(n - 1) + fibMem(n - 2);
			return solutions[n];	
		}	
};

int main() {
	FibonacciMemoized fib;
	cout << fib.fibMem(10) << endl;
}
