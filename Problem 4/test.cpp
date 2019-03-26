#include <iostream>

using namespace std;

int main(){
	int n = 1234;
	int a = n/1000;
	int b = n%1000/100;
	int c = n%100/10;
	int d = n%10;
	cout << n << endl;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << d*1000+c*100+b*10+a << endl;
	return 0;
}
