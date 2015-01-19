/*
 * entity.h
 *
 *  Created on: 2015Äê1ÔÂ18ÈÕ
 *      Author: Yanren
 */

#ifndef ENTITY_H_
#define ENTITY_H_

#include <iostream>
#include <fstream>
#include "employee.h"

class Entity
{
private:
	std::ofstream fout;
	std::ifstream fin;
public:
	void addEmployee(Employee e);
	void deleteEmployee(Employee e);
	void updateEmployee(Employee e);
};



#endif /* ENTITY_H_ */
