// ĘÏŠnÅcĄŠŪĖ·û`ĖÓĖ·ģðņ

#include <iostream>

using namespace std;

int main()
{
	int n;			// ĘÏ
	cout << "ĘÏÍ";
	cin >> n;

	for (int i = 1; i < n; i++) {
		if (i * i > n) break;
		if (n % i != 0) continue;
		cout << i << "~" << n / i << '\n';
	}
}
