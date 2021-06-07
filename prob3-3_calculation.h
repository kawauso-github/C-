#ifndef _TWOSTRINGS_H_
#define _TWOSTRINGS_H_
 
#include <iostream>
 
using namespace std;
 
class Calculation {
private:
    //  一つ目の数
    int m_number1;
    //  二つ目の数
    int m_number2;
public:
    //  一つ目の数を設定
    void setNumber1( int n );
    //  二つ目の数を設定
    void setNumber2( int n );

    //  一つ目の数を取得
    int getNumber1();
    //  二つ目の数を取得
    int getNumber2();

    //  二つの値の和を返す
    int add();

    //  二つの値の差を返す
    int sub();
};
 
#endif // _TWOSTRINGS_H_



