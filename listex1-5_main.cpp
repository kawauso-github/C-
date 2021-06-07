#include <iostream>
 
using namespace std;
 
bool judge(int);
 
int main(){

    int n;

    cout << "整数を入力：";

	// コンソール入力を待つ
    cin >> n;

	// judge 結果が true（真）の場合
    if( judge( n ) ) {

        cout << "この数は0以上です。" << endl;
    }
	// judge 結果がその他 false（偽）の場合
	else {

        cout << "この数は0未満です。" << endl;
    }

    return 0;
}
 
bool judge( int n ) {

	// ０位上の場合
    if( n >= 0 ) {

		// 真で処理を終了する
        return true;
    }
	// その他の場合
	else {

		// 偽で処理を終了する
        return false;
    }
}




