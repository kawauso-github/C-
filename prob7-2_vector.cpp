#include "prob7-2_vector.h"
 
//  コンストラクタ
Vector::Vector() : m_x(0), m_y(0)
{
}

//  引数付きコンストラクタ
Vector::Vector( double a, double b ) : m_x( a ), m_y( b )
{
//	m_x = a;
//	m_y = b;
}

//  成分の設定
void Vector::set(double x, double y)
{
    m_x = x;
    m_y = y;
}
//  x成分の取得
double Vector::getX()
{
    return m_x;
}
//  y成分の取得
double Vector::getY()
{
    return m_y;
}



