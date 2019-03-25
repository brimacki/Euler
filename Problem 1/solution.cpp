#include <iostream>

using namespace std;

int main(){
	int A = 1e3;
	int sum = 0;
	for(int i = 1; i < A; ++i){
		if(i%3 == 0){
			sum += i;
		}
		if(i%5 == 0){
			sum += i;
		}
		if(i%15 == 0){
			sum -= i;
		}
	}
	cout << "This is the sum of all natural numbers less than " << A << " that are multiples of 3 or 5: " << sum << endl;
	return 0;
}
