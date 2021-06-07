#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){

	int				val = 0;
	int				index = 0;
	int				index2 = 0;
	int				flg = 0;
	vector< int >	v1;

	for( ;; ) {

		cout << "正の整数を入力: ";
		// コンソールから値を取得する
		cin >> val;

		// −１が入力された場合処理を終了する
		if( val == -1 ) {

			break;
		}
		else {

			// 入力された値をプッシュする
			v1.push_back( val );
		}
	}

	// 一から九まで繰り返す
	for( index = 0 ; index < 10 ; index++ ) {

		cout << "一の位が" << index << ":";

		// ベクターに格納された値分繰り返す
		for( index2 = 0, flg = 0 ; index2 < v1.size() ; index2++ ) {

			// 割り算したあまりがインデックス１と等しい場合
			if( ( v1[ index2 ] % 10 ) == index ) {

				cout << v1[ index2 ] << " ";

				// 等しい値がある場合はフラグをONする
				flg = 1;
			}
		}

		if ( flg == 0 ) {

			cout << "なし";
		}

		cout << endl;
	}

	return 0;
}





