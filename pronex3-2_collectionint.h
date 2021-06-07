#ifndef _COLLECTIONINT_H_
#define _COLLECTIONINT_H_
 
template < typename TYPE >
class CollectionInt {

private:
    //  配列データ
    TYPE* m_pArray;
    //  配列の長さ
    int m_length;

public:
    //  コンストラクタ
    CollectionInt( TYPE* arr, int len );
    //  デストラクタ
   virtual ~CollectionInt();
    //  最大値の取得
    TYPE getMax();
    //  最小値の取得
    TYPE getMin();
    //  成分の表示
    void showArray();
     
};
 
#endif // _COLLECTIONINT_H_




