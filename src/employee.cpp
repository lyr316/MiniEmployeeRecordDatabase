/*
 * employee.cpp
 *
 *  Created on: 2014��10��20��
 *      Author: Yanren
 */

#include "employee.h"

Employee::Employee(int id, std::string name, std::string department, std::string position, int salary)
{
	this->id = id;
	this->name = name;
	this->department = department;
	this->position = position;
	this->salary = salary;
}
