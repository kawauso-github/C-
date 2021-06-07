#include <iostream>
#include <string>
#include <stack>
 
using namespace std;
 
int main() {

    stack< string >		stk;  // スタックのデータ構造を用意する。
	string				str = "";
	int					length = 0;
	int					index = 0;

	for( ;; ) {

		cout << "英単語を入力:";

		// 文字列の入力待ちをする
		cin >> str;

		// quit を入力されたら処理を終了する
		if( str == "quit" ) {

			break;
		}

		length = str.length();

		for( index = 0 ; index < length ; index++ ) {
			// スタックデータをプッシュする
			stk.push( str.substr( index, 1 ) );
		}

		// スタックが空になるまで繰り返す
    	while ( !stk.empty() ) {

        	// topで要素を取得し、popでその要素をstkから取り除く
        	cout << stk.top();

        	stk.pop();
    	}
		cout << endl;
	}

    return 0;
}




