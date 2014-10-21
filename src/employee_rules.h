/*
 * employee_rules.h
 *
 *  Created on: 2014Äê10ÔÂ20ÈÕ
 *      Author: Real
 */

#ifndef EMPLOYEE_RULES_H_
#define EMPLOYEE_RULES_H_

#include <string>
#include <vector>

class EmployeeRules
{
private:
	static int name_len_min;
	static int name_len_max;
	static int year_min;
	static int year_max;
	static int month_min;
	static int month_max;
	static int days[12];
	static std::vector<std::vector<std::string> > dept_pos;
	static int salary_min;
	static int salary_max;
	static int employee_number;
};


#endif /* EMPLOYEE_RULES_H_ */
