#include <iostream>
#include "prob5-2_object.h"
 
using namespace std;
 
int main() {

	// 	インスタンスへのポインタ領域を確保する
    Object *o1, *o2, *o3;

	// １つ目のインスタンスを生成する
    o1 = new Object();
	// ２つ目のインスタンスを生成する
    o2 = new Object();
	// ３つ目のインスタンスを生成する
    o3 = new Object();

    cout << "オブジェクトの数:" << Object::getObjectNum() << endl;

	// ３つ目のインスタンスを開放する
    delete o3;

    cout << "オブジェクトの数:" << Object::getObjectNum() << endl;

	// ２つ目のインスタンスを開放する
    delete o2;

	// １つ目のインスタンスを開放する
    delete o1;

    cout << "オブジェクトの数:" << Object::getObjectNum() << endl;

    return 0;
}



