#ifndef _NEWCALC_H_
#define _NEWCALC_H_
 
#include "prob6-2_fundcalc.h"

class NewCalc : public FundCalc {
public:
    //  二つの数の積を出力
    double mul();
    //  二つの数の商を出力
    double div();
};
 
#endif // _NEWCALC_H_
