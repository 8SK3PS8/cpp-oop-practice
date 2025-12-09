#include "student.h"
#include "course.h"

Student::Student(string name, int id)
{
    this->name = name;
    this->id = id;
    this->gpa = 0.0;
}

Student::~Student() {}

string Student::getName()
{
    return name;
}

int Student::getId()
{
    return id;
}

double Student::getGpa()
{
    return gpa;
}

void Student::setGpa(double gpa)
{
    this->gpa = gpa;
}

vector<Course*> Student::getCourses()
{
    return courses;
}

void Student::addCourse(Course* course)
{
    courses.push_back(course);
}

void Student::removeCourse(Course* course)
{
    for (int i = 0; i < courses.size(); i++)
    {
        if (courses[i] == course)
        {
            courses.erase(courses.begin() + i);
            return;
        }
    }
}