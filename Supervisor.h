 *Assisted by and Assisted line numbers: Dr.Su lines 47-55
 
 * Matthew Young
 
 *This program will show summaries and information on different workers.
 
 */


//File: Supervisor.h
//Supervisor class definiton

#include "manager.h"
#include "Employee.h"

#ifndef _SUPERVISOR_H
#define _SUPERVISOR_H


class Supervisor : public Employee {
public:
    Supervisor (string theName, float thePayRate, string theDept); // Supervisor constructor
    
    string getDept() const ;
    string setDept(string theDept);
    
    float pay(float hoursWorked) const;
    bool getSalaried() const;
    
    float setPayRate(int rate);
    
protected:
    string dept;
    bool salaries;
    
};

Supervisor::Supervisor(string theName, float thePayRate, string theDept)
: Employee(theName, thePayRate) {
    dept = theDept; // Set varaiable equations
    salaries = true;
}

string Supervisor::getDept() const{
    return dept;
}

string Supervisor::setDept(string theDept){
    theDept = dept;
    return dept; 
}

bool Supervisor::getSalaried() const{
    return true;
}

float Supervisor::pay(float hoursWorked) const{
    return payRate;
}

float Supervisor::setPayRate(int rate){
    payRate = rate; // Pay is fixed so there is no equation
    return payRate;
}



#endif
