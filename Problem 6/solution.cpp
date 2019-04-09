#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]){

	if(argc != 2){
		cout << "You must give the maximum number of the range! Exiting now..." << endl;
		exit(-1);
	}

	long long int max = atoi(argv[1]);
	long long int solution;

	solution = pow(((max*(max+1))/2),2) - (max*(max+1)*(2*max+1))/6;

	cout << "The answer is: " << solution << endl;
	return 0;
}
