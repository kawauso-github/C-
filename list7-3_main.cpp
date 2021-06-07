#include "list7-3_sup1.h"
#include "list7-3_sub1.h"
 
int main(){

	// インスタンスのアドレス格納領域を宣言する
    Sup1 *sp1;
    Sub1 *sp2;

	// インスタンスを生成する
    sp1 = new Sup1();
    sp2 = new Sub1();

	// 各クラスのメソッドを呼び出す
    sp1->func();
    sp2->func();

	// インスタンスを開放する
    delete sp1, sp2;

    return 0;
}



