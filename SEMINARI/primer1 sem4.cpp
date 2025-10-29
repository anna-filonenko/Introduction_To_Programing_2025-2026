#include <iostream>
using namespace std;

bool isPrime(int num) {
	if (num <= 1)
		return false;
	for (int i = 2; i < num; i++)
	{
		num% i;
		if (num % i == 0)
			return false;
	}
	return true;
}
void result(int num) {
	for (int j = 1; j <= num; j++) {
		int k1 = 6 * j + 1;
		int k2 = 6 * j - 1;
		cout << "k1: " << k1 << " k2: " << k2 << endl;
	}
}
int main() {
	int n;
	cin >> n;
	isPrime(n);
	if (isPrime(n))
		result(n);

}
}
