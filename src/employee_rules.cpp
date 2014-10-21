/*
 * employee_rules.cpp
 *
 *  Created on: 2014Äê10ÔÂ20ÈÕ
 *      Author: Real
 */

#include "employee_rules.h"

int EmployeeRules::name_len_min = 3;
int EmployeeRules::name_len_max = 15;
int EmployeeRules::year_min = 1950;
int EmployeeRules::year_max = 1990;
int EmployeeRules::month_min = 1;
int EmployeeRules::month_max = 12;
int EmployeeRules::days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
std::vector<std::vector<std::string> > EmployeeRules::dept_pos;
int EmployeeRules::salary_min = 50000;
int EmployeeRules::salary_max = 1000000;
int EmployeeRules::employee_number = 100000;


