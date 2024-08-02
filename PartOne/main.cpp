#include "Class.h"
#include "Class.cpp"
#include "Mage.h"
#include "Mage.cpp"

void testMage();

int main(){
    testMage();
    return 0;
}

void testMage()
{
    Mage newMage;
    newMage.attack();
}