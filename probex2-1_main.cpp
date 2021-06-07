#include <iostream>

#include "probex2-1_bar.h"
#include "probex2-1_foo.h"
 
using namespace std;
 
int main() {

    Foo* pFoo;
    Bar* pBar;

	pFoo = new Foo;
	pBar = new Bar;

	pBar->func1( pFoo );
	pBar->func2();
	pFoo->fuga( pBar );
	pFoo->hoge();

	delete pFoo;
	delete pBar;

	return( 0 );
}



