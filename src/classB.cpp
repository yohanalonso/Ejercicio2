#include "../include/classB.h"

classB::classB(int num){
    this->num = num;
    A = nullptr;
    C = nullptr;
}
classB::~classB(){
}
int classB::getNum(){
    return num;
}
classA* classB::getA(){
    return this->A;
}
classC* classB::getC(){
    return this->C;
}
void classB::setA(classA* A){
    this->A = A;
}
void classB::setC(classC* C){
    this->C = C;
}

void classB::mensaje(){
    cout<< "\nNum de classB: "<< num << '\n';
    cout<< "Num de classA en classB: " << A->getNum() << '\n';
    cout<< "Num de classC en classB: " << C->getNum() << '\n';
}