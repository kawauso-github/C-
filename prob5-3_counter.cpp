#include <iostream>
#include "prob5-3_counter.h"
 
using namespace std;

// 回数を初期化する
int Counter::m_count = 0;

//  コンストラクタ（カウント回数を0で初期化）
Counter::Counter()
{
	cout << "コンストラクタ実行" << endl;
}

Counter::~Counter()
{
	cout << "デストラクタ実行" << endl;
}

void Counter::reset(){
    m_count = 0;
}

void Counter::count(){
    m_count++;
}

int Counter::getCount(){
    return m_count;
}


