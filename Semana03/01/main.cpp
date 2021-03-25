#include "complex.h"
#include <iostream>


using namespace std;
using namespace N;

int main(){
    complex a(14,3),b(3,23);
    complex* valor = a*b;    
    cout<< valor->getValue().r << " + " << valor->getValue().i << "i \n";
    valor = a/b;
    cout<< valor->getValue().r << " + " << valor->getValue().i << "i \n";
    valor = a+b;
    cout<< valor->getValue().r << " + " << valor->getValue().i << "i \n";
    valor = a-b;
    cout<< valor->getValue().r << " + " << valor->getValue().i << "i \n";
    cout<< valor->getPolarValue().r << " + " << valor->getPolarValue().i << "i \n";

    return 0;
}