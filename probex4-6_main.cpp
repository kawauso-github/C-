#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){

	int						val = 0;
	int						flg = 0;
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

		// 初回の入力の場合
		if( l1.begin() == l1.end() ) {

			// 入力された値をプッシュする
			l1.push_back( val );
		}
		else {

			// リストに格納された値分繰り返す
			for( itr = l1.begin(), flg = 0 ; itr != l1.end() ; itr++ ) {

				// 入力された値が入力済みの値よりも小さい場合
				if( ( val < *itr ) && ( itr != l1.end() ) ) {

					// 入力された値をインサートする
					l1.insert( itr, val);

					// インサート済みフラグをONする
					flg = 1;
					break;
				}
			}

			if( flg == 0 ) {

				// 入力された値をプッシュする
				l1.push_back( val );
			}
		}

		cout << "入力された値:";

		// リストに格納された値分繰り返す
		for( itr = l1.begin() ; itr != l1.end() ; itr++ ) {
			cout << *itr;
		}
		cout << endl;
	}

	cout << endl;

	return 0;
}





