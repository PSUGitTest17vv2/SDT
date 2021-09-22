#pragma once
#ifndef CONTROLLER_H_
#define CONTROLLER_H_

#include <string>
#include "Model.h"
#include "View.h"

namespace controller
{
	class Student
	{
	private:
		model::Student model;
		view::Student view;

	public:
		Student(model::Student model, view::Student view)
		{
			this->model = model;
			this->view = view;
		}

		// Name
		// ---------------------------------------
		std::string getStudentName()
		{
			return model.getName();
		}
		void setStudentName(std::string name)
		{
			model.setName(name);
		}

		// Age
		// ---------------------------------------
		unsigned getAge()
		{
			return model.getAge();
		}
		void setAge(unsigned age)
		{
			model.setAge(age);
		}

		// RollNo
		// ---------------------------------------
		std::string getStudentRollNo()
		{
			return model.getRollNo();
		}
		void setStudentRollNo(std::string rollNo)
		{
			model.setRollNo(rollNo);
		}

		// Update
		// ---------------------------------------
		void updateView()
		{
			view.printStudentDetails(model.getName(), model.getRollNo(),model.getAge());
		}
	};
}

#endif // !CONTROLLER_H_
