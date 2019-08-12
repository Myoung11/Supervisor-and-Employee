/* Assisted by and Assisted line numbers: Dr.Su lines 46-74
 
 * Matthew Young
 
 *This program will show summaries and information on different workers.
 
 */


/*
 * File: employee.h
 * Employee class definition.
 */

#ifndef _EMPLOYEE_H
#define _EMPLOYEE_H

#include <string>
using namespace std;

class Employee {
public:
  Employee(string theName, float thePayRate);

  string getName() const;
  float getPayRate() const;
  string setName(string theName);
    float setPayRate(int rate);
  bool setSalaried(bool salary);
  float pay(float hoursWorked) const;

protected:
  string name;
  float payRate;
};

/*
 * Employee method definitions.
 */

string Employee::setName(string theName){
    name = theName;
    return name;
}

float Employee::setPayRate(int rate){
    payRate = rate * 40; // Equation for their pay
    return payRate;
}

bool Employee::setSalaried(bool salary){
    if (salary == true){
        return payRate;
    }
    
    else {
        return setPayRate(payRate);
    }
}

Employee::Employee(string theName, float thePayRate)
{
  name = theName;
  payRate = thePayRate;
}

string Employee::getName() const
{
  return name;
}

float Employee::getPayRate() const
{
  return payRate;
}

float Employee::pay(float hoursWorked) const
{
     return hoursWorked * payRate;
 
}


#endif /* not defined _EMPLOYEE_H */
