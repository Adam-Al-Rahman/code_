#include <iostream>

#include "../classes/student.h"

using std::cout;

/*
- classes
    : User defined datatype.
    : Blueprint of objects.
    : An Object is an instance of a Class. When a class is defined,
      no memory is allocated but when it is instantiated (i.e. an object is
created) memory is allocated.
    - Attribute
    - Method
- Four Pillars
    - Abstraction
    - Encapsulation
    - Inheritance
    - Polymorphisms
*/

int class_prac() {
  Student Aman;
  Aman.name = "Aman";
  Aman.age = 30;
  Aman.gender = 1;

  cout << "Student Name: " << Aman.name;
}
