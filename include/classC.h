#ifndef _CLASSC_
#define _CLASSC_

#include <iostream>
using namespace std;

#include "classA.h"
#include "classB.h"

class classA;
class classB;

class classC {
private:
    int num;
    classA* A;
    classB* B;
public:
    classC(int);
    ~classC();
    int getNum();
    classA* getA();
    void setA(classA*);
    classB* getB();
    void setB(classB*);
    void mensaje();
};

#endif