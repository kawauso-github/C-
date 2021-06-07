#include "listex2-1_a.h"
#include "listex2-1_b.h"
#include <iostream>
 
using namespace std;
 
B::B( A* pA ) {

    m_pA = pA;
}

void B::hoge() {

    cout << "bar" << endl;

	// インスタンスAのメンバー関数を呼び出す
    m_pA->foo();
}



