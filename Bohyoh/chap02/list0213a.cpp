// 二つの整数値の小さいほうの値と大きいほうの値を求めて表示（別解：コンマ演算子を利用）

#include <iostream>

using namespace std;

int main()
{
	int a, b;

	cout << "整数a：";   cin >> a;
	cout << "整数b：";   cin >> b;

	int min, max;		// 小さいほうの値／大きいほうの値

	if (a < b)
		min = a, max = b;
	else
		min = b, max = a;

	cout << "小さいほうの値は" << min << "です。\n";
	cout << "大きいほうの値は" << max << "です。\n";
}
