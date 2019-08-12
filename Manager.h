 /* Assisted by and Assisted line numbers: Dr.Su lines 45-83
 
 * Matthew Young
 
 *This program will show summaries and information on different workers.
 
 */


//File: manager.h
//Manager class definition.



#ifndef _MANAGER_H
#define _MANAGER_H

#include "Employee.h"

class Manager : public Employee {
public:
    Manager(string theName,
            float thePayRate,
            bool isSalaried);
    
    bool getSalaried() const;
    
    float pay(float hoursWorked) const;
    
protected:
    bool salaried;
};


//Manager method definitions.



Manager::Manager(string theName,
                 float thePayRate,
                 bool isSalaried)
: Employee(theName, thePayRate)
{
    salaried = isSalaried;
}

bool Manager::getSalaried() const
{
    return salaried;
}

float Manager::pay(float hoursWorked) const
{
    if (salaried) // If they are salaried then their pay is constant
        return payRate;
    // else
    return Employee::pay(hoursWorked);
}



#endif // not defined _MANAGER_H
