#ifndef ANIMAL_H
#define ANIMAL_H


class Animal
{
public:
    Animal();
    virtual ~Animal();

    virtual void voice() = 0;
};

#endif // ANIMAL_H
