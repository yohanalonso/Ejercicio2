#include <iostream>
using namespace std;

#include "include/classA.h"
#include "include/classB.h"
#include "include/classC.h"

int main(){
    classA instA(1);
    classB instB(2);
    classC instC(3);
    instA.setB(&instB);
    instA.setC(&instC);
    instB.setA(&instA);
    instB.setC(&instC);
    instC.setA(&instA);
    instC.setB(&instB);

    cout<< "Num de instA: " << instA.getNum() << '\n';
    cout<< "Num de instB: " << instB.getNum() << '\n';
    cout<< "Num de instC: " << instC.getNum() << '\n';

    cout<< "\nNum de instB en instA " << instA.getB()->getNum() << '\n';
    cout<< "Num de instC en instB " << instB.getC()->getNum() << '\n';
    cout<< "Num de instA en instC " << instC.getA()->getNum() << '\n';
}