#include "prob4-2_hoge.h"
#include <iostream>
 
using namespace std;
 
Hoge::Hoge()
{
	cout << "コンストラクタ実行" << endl;
}

Hoge::~Hoge()
{
	cout << "デストラクタ実行" << endl;
}

void Hoge::foo()
{
    cout << "fooメソッド" << endl;
}



