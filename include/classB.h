#ifndef _CLASSB_
#define _CLASSB_

#include <iostream>
using namespace std;

#include "classA.h"
#include "classC.h"

class classA;
class classC;

class classB {
private:
    int num;
    classA* A;
    classC* C;
public:
    classB(int);
    ~classB();
    int getNum();
    classA* getA();
    void setA(classA*);
    classC* getC();
    void setC(classC*);
    void mensaje();
};


#endif