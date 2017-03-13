//
// Created by Mariusz Saramak on 11/03/2017.
//

#include "Person.h"

Person::Person(std::string name, std::string surname)
        : myName(name), mySurname(surname) {
}

std::string Person::toString() {
    return myName.append(" ").append(mySurname);
}
