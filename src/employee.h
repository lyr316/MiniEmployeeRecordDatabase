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
public:
	int id;
	std::string name;
	std::string department;
	std::string position;
	int salary;
public:
	Employee(int id, std::string name, std::string department, std::string position, int salary);
};

#endif /* EMPLOYEE_H_ */
