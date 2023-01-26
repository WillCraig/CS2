// 
// William Craig
// recursion_practice
// CS23001 Lab001
//

#include <iostream>

int fib(int n) {
	
	if (n == 0 || n == 1) {
		return n;
	}
	return (fib(n - 1) + fib(n - 2));
}


int fibTail(int p, int c, int n) {
	if (n == 0) {
		return c;
	}
	return fibTail(c, p + c, n - 1);
}


int main() {
	std::cout << "Enter a number: ";

	int input = 0;
	std::cin >> input;

	std::cout << "Recursive Fibonacci of " << input << ": ";
	for (int i = 0; i < input; i++) {
		std::cout << fib(i) << " ";
	}
	std::cout << std::endl;




	std::cout << "Tail Recursive Fibonacci of " << input << ": " << fibTail(0,1,input) << "\n";
	for (int i = 0; i < input; i++) {
		std::cout << fibTail(0,1,i) << " ";
	}
	std::cout << std::endl;

	return 0;
}

