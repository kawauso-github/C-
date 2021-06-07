#include <iostream>
#include "prob4-1_number.h"
 
using namespace std;

// コンストラクタ（メンバ変数を０で初期化する）
Number::Number() : a( 0 ), b( 0 )
{
	cout << "Number オブジェクト生成" << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

//  二つの数値を設定
void Number::setNumbers(int n1, int n2)
{
    a = n1;
    b = n2;
}
int Number::getAdd()
{
    return a + b;
}



