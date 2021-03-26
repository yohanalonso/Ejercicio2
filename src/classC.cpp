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