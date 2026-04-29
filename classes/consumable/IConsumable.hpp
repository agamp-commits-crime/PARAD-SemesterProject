#ifndef ICONSUMABLE_H
#define ICONSUMABLE_H


/*
* This Class is an Interface.
* In C++ an Interface is a Class that only has pure virtual functions and no field.
*
 * Its children have to overwrite/implement the pure virtual functions.
 *
 * */
class IConsumable {

    virtual bool hasEffect() = 0;
    virtual int calculateEffectStrength() = 0;
    virtual void printDescription() = 0;

};



#endif //ICONSUMABLE_H
