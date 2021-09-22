#include <iostream>
#include <string>

#include "Controller.h"
#include "Model.h"
#include "View.h"

inline void retriveStudentFromDatabase(model::Student& student,
										 std::string name,
										 std::string rollno,
										 unsigned age)
{
	student.setName(name);
	student.setRollNo(rollno);
	student.setAge(age);
}

int main()
{
	model::Student model;
	retriveStudentFromDatabase(model, "Mark Abramov", "15UCS157", 20U);

	view::Student view;
	controller::Student controller(model, view);

	controller.updateView();
	controller.setStudentName("Ada Wong");
	controller.setAge(25U);
	controller.setStudentRollNo("20UCS456");
	controller.updateView();

	return 0;
}