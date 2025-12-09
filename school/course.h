#ifndef COURSE
#define COURSE

#include <string>
#include <vector>
using namespace std;

class Student;

class Course
{
    public:
        Course(string name, string courseCode, string instructor);
        ~Course();

        string getName();
        string getCourseCode();
        string getInstructor();
        vector<Student*> getRoster();
        void addStudent(Student* student);
        void removeStudent(Student* student);

    private:
        string name;
        string courseCode;
        string instructor;
        vector<Student*> roster;
};

#endif