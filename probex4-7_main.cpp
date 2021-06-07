#include <iostream>
#include <string>
#include <list>

using namespace std;

int main(){

	string						val = "";
	string						str = "";
	list< string >				l1;
	list< string >::iterator	itr;

	for( ;; ) {

		cout << "文字列を入力: ";

		// コンソールから値を取得する
		cin >> val;

		// quitが入力された場合処理を終了する
		if( val == "quit" ) {

			break;
		}
		else {

			// 入力された値をプッシュする
			l1.push_back( val );
		}
	}

	// リストに格納された値分繰り返す
	for( itr = l1.begin() ; itr != l1.end() ; itr++ ) {

		// リストの要素が５文字以上の場合
		str = *itr;

		if( str.length() >= 5 ) {

			// 対象リストを削除する
			l1.remove( *itr );

            // イテレータを先頭にする
            itr = l1.begin();
		}
	}

	cout << "５文字未満の単語: ";

	// リストに格納された値分繰り返す
	for( itr = l1.begin() ; itr != l1.end() ; itr++ ) {

		cout << *itr << " ";
	}

	cout << endl;

	return 0;
}





