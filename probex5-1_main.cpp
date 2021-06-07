#include <iostream>
#include <string>
#include <map>
 
using namespace std;
 
int main() {

	string					str = "";
    int						index = 0;
    int						flg = 0;

	// map のデータ構造を用意する。
    map < string, string >	score;

    string names[] = { "cat", "dog", "bird", "tiger" };

    score[ names[ 0 ] ] = "猫";		//  キーと値の関連付け
    score[ names[ 1 ] ] = "犬";		//  キーと値の関連付け
    score[ names[ 2 ] ] = "鳥";		//  キーと値の関連付け
    score[ names[ 3 ] ] = "トラ";	//  キーと値の関連付け

    for( ;; ) {

		cout << "英語で動物の名前を入力してください: ";

		// 文字列の入力待ちをする
		cin >> str;

		// quit を入力されたら処理を終了する
		if( str == "quit" ) {

			break;
		}

		// キーテーブル分検索を繰り返す
    	for( index = 0, flg = 0 ; index < 4 ; index++ ) {

			// 入力文字列でキーを検索する
			if( names[ index ] == str ) {

				// キーに該当する要素を出力する
				cout << "「" << score[ names[ index ] ] << "」です。"  << endl;

				// キーが見つかった場合フラグをONする
				flg = 1;
			}
		}

		// キーが見つからなかった場合
		if( flg == 0 ) {

			cout << "対応するデータは登録されていません。" << endl;
		}
    }

    return 0;
}




