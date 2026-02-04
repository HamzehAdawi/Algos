#include <iostream>

using namespace std;

class Fibonacci {
	public:
		int fib(int seq) {

			if (seq <= 1) {
				return seq; 
			} else {
				return (fib(seq - 1) + fib(seq - 2));
			}

			
		}		
};

int main() {
	Fibonacci fibo;

	cout << fibo.fib(10) << endl;
}
