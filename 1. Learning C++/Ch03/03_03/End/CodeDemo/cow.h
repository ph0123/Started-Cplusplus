#pragma once //make include header one time, if other header files include it again.

#ifndef COW_H
#define COW_H
#include <string>

enum cow_purpose { dairy, meat, hide, pet };

class cow{
public:
    cow(std::string name_i, int age_i, unsigned char purpose_i);
    std::string get_name();
    int get_age();
    unsigned char get_purpose();
    void set_age(int new_age);
private:
    std::string name;
    int age;
    unsigned char purpose;
};

#endif // COW_H

//ifndef ... endif is realy good for debug or do another task.
/*
#define DEBURG false // this will make the block of codes inside #ifdef do not work and not compile.
#ifndef DEBURG
... the code here it is only work if Deburg== true
#endif

*/