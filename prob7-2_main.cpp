#include <iostream>
#include "prob7-2_vector.h"
 
using namespace std;
 
int main(){

	// インスタンスのアドレス格納領域を確保する
    Vector *v1, *v2;

    //  引数なしのコンストラクタで生成
    v1 = new Vector();

    //  引数つきのコンストラクタで生成
    v2 = new Vector(1.1, 2.3);

	// 引数なしのインスタンのメンバ変数に値を設定する
    v1->set(3.8, 2.7);

    //  引数なしのインスタンスのメンバ変数の中身を表示する
    cout << "v1 =(" << v1->getX() << " , " << v1->getY() << ")" << endl;

    //  引数ありのインスタンスのメンバ変数の中身を表示する
    cout << "v2 =(" << v2->getX() << " , " << v2->getY() << ")" << endl;

    delete v1;
    delete v2;

    return 0;
}




