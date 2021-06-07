#include <iostream>
 
using namespace std;
 
struct data{
    int n;
    double d;
};
 
int main(){

	// テーブルの実態を宣言する
    data dt;

	// メンバー変数に値を設定する
    dt.n = 100;

	// メンバー変数に値を設定する
    dt.d = 12.34;

    cout << "dt.n = " << dt.n << endl << "dt.d = " << dt.d << endl;

    return 0;
}



