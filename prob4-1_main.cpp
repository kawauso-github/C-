#include <iostream>
#include "prob4-1_number.h"
 
using namespace std;
 
int main(){

	// インスタンスのアドレス領域を確保する
    Number* pN;

	// インスタンスを生成する
    pN = new Number();

	// Number オブジェクトに値を設定する
    pN->setNumbers(1, 2);

	// Number オブジェクトの現在の値を表示する
    cout << pN->getAdd() << endl;

	// インスタンスを開放する
	delete pN;

    return 0;
}



