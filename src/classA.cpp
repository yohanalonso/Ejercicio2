#include "../include/classA.h"

classA::classA(int num){
    this->num = num;
    B = NULL;
    C = NULL;
}
classA::~classA(){
}
int classA::getNum(){
    return num;
}
classB* classA::getB(){
    return this->B;
}
classC* classA::getC(){
    return this->C;
}
void classA::setB(classB* B){
    this->B = B;
}
void classA::setC(classC* C){
    this->C = C;
}

void classA::mensaje(){
    cout<< "\nNum de classA: "<< num << '\n';
    cout<< "Num de classB en classA: " << B->getNum() << '\n';
    cout<< "Num de classC en classA: " << C->getNum() << '\n';
}
