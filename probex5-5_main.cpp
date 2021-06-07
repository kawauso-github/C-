#include <iostream>
#include <string>
#include <queue>
 
using namespace std;
 
int main() {

    queue< string >	que;  // queue のデータ構造を用意する。
	string		str = "";

	for( ;; ) {

		cout << "文字列を入力:";

		// 文字列の入力待ちをする
		cin >> str;

		// quit を入力されたら処理を終了する
		if( str == "quit" ) {

			break;
		}

		// キューにデータをプッシュする
		que.push( str );
	}

	// キューが空になるまで繰り返す
    while ( !que.empty() ) {

        // frontで要素を取得し、popでその要素をqueから取り除く
        cout << que.front() << endl;
        que.pop();
    }

    return 0;
}




