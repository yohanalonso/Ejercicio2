#ifndef _CLASSA_
#define _CLASSA_

#include <iostream>
using namespace std;

#include "classB.h"
#include "classC.h"

class classB;
class classC;

class classA {
private:
    int num;
    classB* B;
    classC* C;
public:
    classA(int);
    ~classA();
    int getNum();
    classB* getB();
    void setB(classB*);
    classC* getC();
    void setC(classC*);
    void mensaje();
};

#endif