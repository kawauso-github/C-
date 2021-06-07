#include <iostream>
#include <string>
#include <stack>
 
using namespace std;
 
int main() {

    stack< string >		stk;  // スタックのデータ構造を用意する。
	string				str = "";

	for( ;; ) {

		cout << "文字列を入力:";

		// 文字列の入力待ちをする
		cin >> str;

		// quit を入力されたら処理を終了する
		if( str == "quit" ) {

			break;
		}

		// キューにデータをプッシュする
		stk.push( str );
	}

	// スタックが空になるまで繰り返す
    while ( !stk.empty() ) {

        // topで要素を取得し、popでその要素をstkから取り除く
        cout << stk.top() << endl;

        stk.pop();
    }

    return 0;
}




