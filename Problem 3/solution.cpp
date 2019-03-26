#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
	unsigned long target = 600851475143;
	unsigned long factor;
	int test;	
	int count = 0;
	vector <unsigned long> factors;
	vector <unsigned long> primeFactors;
	vector <unsigned long> nonPrimeFactors;
	//Gather the factors
	if(target%2 == 0){
		factors.push_back(2);
	}
	for(unsigned long i = 3; i < sqrt(target); i+=2){	//Only two and odd numbers are prime. Two is *obviously* not the largest prime factor
		if(target%i == 0){
			factor = i;
			factors.push_back(factor);
			factor = target/i;
			factors.push_back(factor);
		}
	}
	sort(factors.begin(),factors.end());

	cout << "The factors of " << target << " are:" << endl;
	for(int i = 0; i < factors.size(); ++i){
		cout << factors.at(i) << endl;
	}
	//Test primeness
	for(int i = 0; i < factors.size(); ++i){
		test = factors.at(i);
		for(int j = 2; j < (int)sqrt(test) + 1; ++j){
			if(test % j == 0){
				++count;
			}
			else{
			}
		}
		if(count == 0){
			cout << test << " is a prime factor of " << target << endl;
		}
	}
	return 0;
}
