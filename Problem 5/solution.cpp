#include <vector>
#include <iostream>

using namespace std;

vector<int> getPrimes(int max){

	vector<int> primes;
	primes.push_back(2);
	
	for(int i = 3; i <= max; ++i){
		bool prime=true;
		for(int j = 0; j < primes.size() && primes.at(j)*primes.at(j) <= i; ++j){
			if(i % primes.at(j) == 0){
				prime=false;
				break;
			}
		}
		if(prime == true){
			primes.push_back(i);
		}
	}
	return primes;
}

vector<int> addPrimes(vector<int> primes, int max){

	vector<int> largerVector = primes;
	for(int i = 0; i < primes.size(); ++i){
		int number = primes.at(i);
		while(number*primes.at(i) < max){
			largerVector.push_back(primes.at(i));
			number *= primes.at(i);
		}
	}
	return largerVector;
}

int main(int argc, char* argv[]){

	if(argc != 2){
		cout << "You must give the maximum number of the range! Exiting now..." << endl;
		exit(-1);
	}
	const int max = atoi(argv[1]);
	long long int solution = 1;
	//Gather primes up to max
	vector<int> primesUpToTwenty = getPrimes(max);
	//Add primes to end of vector if less than 20
	vector<int> vectorToMultiply = addPrimes(primesUpToTwenty, max);
	//Multiply all value of vector
	for(int i = 0; i < vectorToMultiply.size(); ++i){
		solution *= vectorToMultiply.at(i);
	}
	cout << "The answer is: " << solution << endl;
	return 0;
}
