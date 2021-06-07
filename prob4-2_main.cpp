#include <iostream>
#include "prob4-2_hoge.h"
 
using namespace std;
 
int main(){

	// インスタンスのアドレス格納領域を確保する
    Hoge* pH;

	// メモリを獲得してインスタンスを生成する
    pH = new Hoge();

	// メンバー関数を呼び出す
    pH->foo();

	// 獲得したメモリを開放する
    delete pH;

    return 0;
}



