#include "../include/classA.h"

classA::classA(int num){
    this->num = num;
    B = nullptr;
    C = nullptr;
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