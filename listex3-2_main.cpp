#include <iostream>
#include <string>
#include "listex3-2_calc.h"
 
using namespace std;
 
int main() {

	// CCalc を int 型でインスタンスを生成する
    CCalc<int> i1;

	// CCalc を string 型でインスタンスを生成する
    CCalc<string> i2;

	// int 型インスタンスのメンバー変数へ値を設定数する
    i1.set(1, 2);

	// string 型インスタンスのメンバー変数へ値を設定数する
    i2.set("ABC", "DEF");

	// int 型のインスタンスのメンバ変数を足し算してコンソールに表示する
    cout << i1.add() << endl;

	// string 型のインスタンスのメンバ変数を足し算（連結）してコンソールに表示する
	cout << i2.add() << endl;

    return 0;
}



