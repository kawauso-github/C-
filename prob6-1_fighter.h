#ifndef _FIGHTER_H_
#define _FIGHTER_H_
 
#include "prob6-1_airplane.h"


//  戦闘機クラス
class Fighter: public Airplane{

public:

	// 戦闘する
    void fight();
};
 
#endif // _FIGHTER_H_
