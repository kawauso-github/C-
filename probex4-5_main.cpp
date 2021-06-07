#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){

	int						val = 0;
	list< int >				l1;
	list< int >::iterator	itr;

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
			l1.push_back( val );
		}
	}

	// リストに格納された値分繰り返す
	for( itr = l1.begin() ; itr != l1.end() ; itr++ ) {

		// リストが２の場合これを削除する
		if( *itr == 2 ) {

			// 対象リストを削除する
			l1.remove( *itr );

			// イテレータを先頭にする
			itr = l1.begin();
		}
		else {

			// イテレータをインクリメントする
			itr++;
		}
	}

	// リストに格納された値分繰り返す
	for( itr = l1.begin() ; itr != l1.end() ; itr++ ) {

		cout << *itr << " ";
	}

	cout << endl;

	return 0;
}





