#ifndef USER_H
#define USER_H

#include <iostream>

class User {
public:
    void accessLevel();
};

class Employee : public User {
public:
    void accessLevel();
};

class InventoryManager : public Employee {
public:
    void accessLevel();
};

#endif
