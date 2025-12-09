#ifndef SCHOOL
#define SCHOOL

#include <string>
#include <vector>
#include <memory>
#include "student.h"
#include "course.h"
using namespace std;

class School
{
    public:
        School(string name);
        ~School();

        string getName();
        Student* addStudent(string name, int id);
        Course* addCourse(string name, string code, string instructor);
        void enrollStudent(Student* student, Course* course);
        void removeStudent(int id);
        void removeCourse(string code);

    private:
        string name;
        vector<unique_ptr<Student>> students;
        vector<unique_ptr<Course>> courses;
};

#endif