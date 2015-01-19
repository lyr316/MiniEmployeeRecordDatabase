/*
 * main.cpp
 *
 *  Created on: 2015Äê1ÔÂ18ÈÕ
 *      Author: Yanren
 */

#include "employee.h"
#include "entity.h"

int main()
{
	int id = 1;
	std::string name = "Real";
	std::string department = "Engineering";
	std::string position = "Engineer";
	int salary = 65000;

	Employee e = Employee(id, name, department, position, salary);

	Entity entity = Entity();
	entity.addEmployee(e);

	return 0;
}
