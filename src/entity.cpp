/*
 * entity.cpp
 *
 *  Created on: 2015Äê1ÔÂ18ÈÕ
 *      Author: Yanren
 */

#include "entity.h"

void Entity::addEmployee(Employee e)
{
	fout.open("database.txt");
	fout << e.id << '/n'
			<< e.name << '/n'
			<< e.department << '/n'
			<< e.position << '/n'
			<< e.salary << std::endl;
}
