#include "../include/classC.h"

classC::classC(int num){
    this->num = num;
    A = nullptr;
    B = nullptr;
}
classC::~classC(){
}
int classC::getNum(){
    return num;
}
classA* classC::getA(){
    return this->A;
}
classB* classC::getB(){
    return this->B;
}
void classC::setA(classA* A){
    this->A = A;
}
void classC::setB(classB* B){
    this->B = B;
}

void classC::mensaje(){
    cout<< "\nNum de classC: "<< num << '\n';
    cout<< "Num de classA en classC: " << A->getNum() << '\n';
    cout<< "Num de classB en classC: " << B->getNum() << '\n';
}