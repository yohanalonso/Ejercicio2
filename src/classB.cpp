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