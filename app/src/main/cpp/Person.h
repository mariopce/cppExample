//
// Created by Mariusz Saramak on 11/03/2017.
//

#ifndef CPPEXMPLE_PERSON_H
#define CPPEXMPLE_PERSON_H
#include <string>

class Person {
public:

    Person(std::string name, std::string surname);

    std::string toString();

private:
    std::string& myName;
    std::string& mySurname;
};


#endif //CPPEXMPLE_PERSON_H
