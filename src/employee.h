/*
 * employee.h
 *
 *  Created on: 2014Äê10ÔÂ20ÈÕ
 *      Author: Real
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>

class Employee
{
private:
	int id;
	std::string name;
	int birthday [3];
	std::string department;
	std::string position;
	int salary;
public:
	Employee();
};

#endif /* EMPLOYEE_H_ */
