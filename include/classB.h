#ifndef _CLASSB_
#define _CLASSB_

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
};


#endif