#include "listex2-1_a.h"
#include "listex2-1_b.h"
#include <iostream>
 
using namespace std;
 
A::A(){

	// インスタンスBを生成する（パラメータにインスタンスAのアドレスを指定）
    m_pB = new B( this );
}

void A::foo(){

    cout << "foo" << endl;
}

void A::bar(){

	// インスタンスBのメンバー関数を呼び出す
    m_pB->hoge();
}



