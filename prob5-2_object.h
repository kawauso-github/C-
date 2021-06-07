#ifndef _OBJECT_H_
#define _OBJECT_H_
 
class Object {

private:

	// オブジェクトの数を静的領域に確保する
    static int m_objectNum;

public:

    //  コンストラクタ
    Object();

    //  デストラクタ
    ~Object();

	// オブジェクトの数を返す
	static int getObjectNum();
};
 
#endif // _OBJECT_H_



