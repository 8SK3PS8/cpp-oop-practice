#include "course.h"
#include "student.h"

Course::Course(string name, string courseCode, string instructor)
{
    this->name = name;
    this->courseCode = courseCode;
    this->instructor = instructor;
}

Course::~Course() {}

string Course::getName()
{
    return name;
}

string Course::getCourseCode()
{
    return courseCode;
}

string Course::getInstructor()
{
    return instructor;
}

vector<Student*> Course::getRoster()
{
    return roster;
}

void Course::addStudent(Student* student)
{
    roster.push_back(student);
}

void Course::removeStudent(Student* student)
{
    for (int i = 0; i < roster.size(); i++)
    {
        if (roster[i] == student)
        {
            roster.erase(roster.begin() + i);
            return;
        }
    }
}