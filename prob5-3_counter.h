#ifndef _COUNTER_H_
#define _COUNTER_H_
 
class Counter{
private:
    //  回数
    static int m_count;

public:
    //  コンストラクタ
    Counter();

    //  デストラクタ
    ~Counter();

    //  リセット
    void reset();

    //  カウント
    void count();

    //  カウントの数
    static int getCount();
};
 
#endif // _COUNTER_H_




