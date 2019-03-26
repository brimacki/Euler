#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> createList(int min, int max){

	vector<int> list;
	for(int i = max; i > min - 1; --i){
		for(int j = max; j > min - 1; --j){
			list.push_back(i*j);
		}
	}

	return list;
}

int getPalindrome(int num, int digits){

	int palinNum;
	if(digits == 6){
		int a = num/100000;
		int b = num%100000/10000;
		int c = num%10000/1000;
		int d = num%1000/100;
		int e = num%100/10;
		int f = num%10;
		palinNum = f*100000+e*10000+d*1000+c*100+b*10+a;
	}
	if(digits == 5){
		int a = num/10000;
		int b = num%10000/1000;
		int c = num%1000/100;
		int d = num%100/10;
		int e = num%10;
		palinNum = e*10000+d*1000+c*100+b*10+a;
	}
	return palinNum;
}

vector<int> palindromeList(vector<int> list){

	int num, palinNum;
	vector<int> palindromes;
	for(int i = 0; i < list.size(); ++i){
		num = list.at(i);
		if(num > 99999){
			palinNum = getPalindrome(num, 6);
		}
		else{
			palinNum = getPalindrome(num, 5);
		}
		if(palinNum == num){
			palindromes.push_back(palinNum);	
		}
	}
	return palindromes;
}

int main(){

	vector<int> wholeList = createList(100, 999);

	vector<int> palindromes = palindromeList(wholeList);

	sort(palindromes.begin(), palindromes.end());

	palindromes.erase(unique(palindromes.begin(), palindromes.end()), palindromes.end());

	cout << "The smallest palindrome that is a result of two three-digit number multiplication is: " << palindromes.at(0) << endl;

	cout << "The largest palindrome that is a result of two three-digit number multiplication is: " << palindromes.at(palindromes.size() - 1) << endl;

	return 0;
}

