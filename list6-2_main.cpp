#include <iostream>
#include "list6-2_position2d.h"
 
using namespace std;
 
int main(int argc,char** args) {
    Position2D p;
    p.setValue(1,1);
    p.move(2,3);
    cout << "p:("  << p.getX() << "," << p.getY() << ")" << endl;
    p.resetPosition();
    cout << "p:("  << p.getX() << "," << p.getY() << ")" << endl;
    return 0;
}



