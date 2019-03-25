#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector < int > fib;
	int fib1 = 1;
	int fib2 = 2;
	int fib3;
	int N = 4e6;
	int sum = 0;
	fib.push_back(fib1);
	fib.push_back(fib2);
	while(fib2 < N){
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;
		if(fib3 < N ){
			fib.push_back(fib3);
		}
	}
	for(int i = 0; i < fib.size(); ++i){
		if(fib.at(i) % 2 == 0){
			sum += fib.at(i);
		}
	}
	cout << "The summation of all even-valued terms in the Fibonacci sequence less than " << N << " four million is: " << sum << endl;
	return 0;
}
