#include <iostream>
#include "prob5-2_object.h"
 
using namespace std;

//  静的メンバ変数の初期値を設定
int Object::m_objectNum = 0;
 
//  コンストラクタ
Object::Object()
{
    //  オブジェクトの数をカウントする
    m_objectNum++;

	cout << "オブジェクトの数をインクリメントする" << endl;
}
//  デストラクタ
Object::~Object()
{
    //  オブジェクトの数をカウントする
    m_objectNum--;

	cout << "オブジェクトの数をデクリメントする" << endl;
}

// オブジェクトの数を返す
int Object::getObjectNum()
{
	return( m_objectNum );
}




