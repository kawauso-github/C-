#include <iostream>
#include "prob5-3_counter.h"
 
using namespace std;
 
int main(){

	// Counter のインスタンスを生成する
    Counter c1, c2;

	// Counter1 のカウントをインクリメントする
    c1.count();

	// Counter2 のカウントをインクリメントする
    c2.count();
    c2.count();

	// Counter2 のカウントをリセットする
	c2.reset();


	// Counter1 のカウントをインクリメントする
    c1.count();

	// Counter1 のカウントをインクリメントする
    c1.count();

	// Counter2 のカウントをインクリメントする
    c2.count();

    cout << "c1のカウント数：" << c1.getCount() << endl;
    cout << "c2のカウント数：" << c2.getCount() << endl;
    cout << "トータルのカウント数:" << c1.getCount() + c2.getCount() << endl;

    return 0;
}


