Project Name: Mini Employee Record Database

Project Overview: 
Implement a simple employee record database, which manages the records of a large number of employees  (NOTE, we want you to implement this simple database, but not using any existing database system). The system needs to be able to
1: Randomly generate a large number of records, and write them to the database.
2: Support adding, deleting and updating of records in the database.
3: Allow users to query the database.

Detailed description:

Part 1: Data description:
Employee record: Each employee record records the basic information of one employee, which should include:
	ID, Name, Birthday, Department, Position, Salary
All those requirements to data below hold for randomly generated data and newly added data.
Name: String with characters only, no less 3, no more than 15 characters, such as "ejz", "ubzzew". They don't have to be like real names.
Birthday: between 01/01/1950 to 01/01/1990.
Department: We have three departments in the company, "development", "sales" and "HR". When generating employees, the ratio of employees in these three departments should roughly be: 5:3:2. (50% development, 30% sales, 20% HR).
Position:
	For "development" dept, we have three positions: 1: testing_engineer 2: developer 3:architect. Their ratio should roughly be (3:6:1).
 
	For "sales" dept, we have two positions: 1: sales_representative 2: sales_manager. Their ratio should be (8:2).
              
	For "HR" dept, we only have one position: 1 HR_representative.
Salary: between 50K-1M, and independent from employee's position
Number of employees: This is a large enterprise, with 100K employees.

Part 2: Interface:
As this is a simple database, we assume at any given moment, only one user is operating this database. Your user interface should be a simple number selection interface, for example, when it starts it should look like:
	Welcome to Mini Employee Record Database
	You can:
	1: generate random records
	2: add an employee
	3: delete employees
	4: update employee info
	5: show employees
	6: raise salary for all employees
	7: exit
Users can type in any number between 1 - 7 choose the operations she wants, and any other input should be denied.
After choosing, the subsequential interfaces should be in the same style.

Part 3: Generate random data:
When you generate employee record, please generate exactly 100K. Whenever users generate random records, all the previous records can be erased and replaced by the newly generated data.
Data on files: The employee records have to be written to  data file (yourself can decide how to organize them).

Part 4: Add, delete and update:
	1: add employee: Users can add an employee by answering the questions regarding the to-be-added employee, one by one, starting from Name? Birthday?...
	2: delete employee: Users can delete an employee by ID. System should ask the user to input the ID of the to-be-deleted employee.
	3: update employee info: Users can update an employee's info by ID. System should ask users to select which field to update, and then ask for input.(illegal inputs should be denied).

Part 5: Show employees:
Since we have too many employees, we cannot show all of them at once. So, you need to support 2 query types
	1: show employee by ID.  System should ask the user to input the ID of the to-be-shown employee.      
	2: show employees with salary between MIN and MAX. System should ask the user for MIN and MAX. You need to implement a sorting algorithm of your choice to solve this problem. (NOTE, you need to implement from scratch, but not calling any library sorting algorithms.)
 
Part 6: Raise salary for all employees: If user selected this operation, you need to raise salary for all
employees, the rules are:
	All employee of development dept get a 1000$ basic raise first, then based on position:
	1: test engineers get 3% raise (based on after basic raise salary).
	2: developers get 4% raise (based on after basic raise salary).
	3: architects get 5% raise (based on after basic raise salary).

	All employee of sales dept get a 2000$ basic raise first, then based on position:
	1: sales_representative get 1% raise (based on after basic raise salary).
	2: sales_manager get 2% raise (based on after basic raise salary).
         
	All employee of HR dept get a 500$ basic raise only.

Part 7: Exception handling
A database system is supposed to be robust. In this project, you need to handle two types of exceptions:
1: What if the data file is missing, when you tried to write to the database.
2: What if you find the data file is corrupted. Here the corruption means a single employee¡¯s salary is corrupted. For example, employee Mike¡¯s record on the file should look like
		ID,         Name,      Birthday,      Department,      Position,                    Salary
           	012345      Mike       01/01/1990          HR          HR_representative      	    50,000
but now it looks like:
		ID,         Name,      Birthday,      Department,      Position,                    Salary
           	012345      Mike       01/01/1990          HR          HR_representative            x$@#Z

First and Last Requirement:
Your code needs to be well-documented.
