#include <iostream>
#include "prob6-2_fundcalc.h"
 
using namespace std;

FundCalc::FundCalc() : m_number1(0), m_number2(0)
{
	cout << "FundCalc コンストラクタ実行" << endl;
	cout << "m_number1 = " << m_number1 << endl;
	cout << "m_number2 = " << m_number2 << endl;
}

//  一つ目の数を設定
void FundCalc::setNumber1(double number)
{
    m_number1 = number;
//	cout << "setNumber1 実行" << endl;
}
//  二つ目の数を設定
void FundCalc::setNumber2(double number)
{
    m_number2 = number;
//	cout << "setNumber2 実行" << endl;
}

//  一つ目の数を取得
double FundCalc::getNumber1()
{
//	cout << "getNumber1 実行" << endl;
    return m_number1;
}
//  二つ目の数を取得
double FundCalc::getNumber2()
{
//	cout << "getNumber2 実行" << endl;
    return m_number2;
}

//  二つの数の和を出力
double FundCalc::add()
{
    return m_number1 + m_number2;
}
//  二つの数の差を出力
double FundCalc::sub()
{
    return m_number1 - m_number2;
}



