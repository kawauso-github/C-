// 読み込んだ整数値は正の値か？（誤り：余分な空文）

#include <iostream>

using namespace std;

int main()
{
	int n;

	cout << "整数値：";
	cin >> n;

	if (n > 0);
		cout << "その値は正です。\n";
}
