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

    instA.mensaje();
    instB.mensaje();
    instC.mensaje();
}