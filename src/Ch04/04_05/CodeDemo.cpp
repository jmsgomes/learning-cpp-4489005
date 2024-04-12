// Learning C++
// Challenge 04_05
// Calculate a GPA, by Eduardo Corpeño

#include <iostream>
#include <vector>

#include "records.h"

int main() {
  float GPA = 0.0f;
  int id;

  std::vector<Student> students = {
      Student(1, "George P. Burdell"),
      Student(2, "Nancy Rhodes"),
  };

  std::vector<Course> courses = {
      Course(1, "Algebra", 5),
      Course(2, "Physics", 4),
      Course(3, "English", 3),
      Course(4, "Economics", 4),
  };

  std::vector<Grade> grades = {
      Grade(1, 1, 'B'), Grade(1, 2, 'A'), Grade(1, 3, 'C'),
      Grade(2, 1, 'A'), Grade(2, 2, 'A'), Grade(2, 4, 'B'),
  };

  std::cout << "Enter a student ID: " << std::flush;
  std::cin >> id;

  // Calculate the GPA for the selected student.
  // Write your code here
  Student* selected_student;
  for (Student& student : students) {
    if (student.get_id() == id) {
      selected_student = &student;
      break;
    }
  }

  float points = 0.0f;
  float credits_sum = 0.0f;
  std::vector<Grade>::iterator grade_iterator = grades.begin();
  for (Grade& grade : grades) {
    if (grade.get_student_id() == id) {
      float course_credit = 0.0f;
      for (Course& course : courses) {
        if (course.get_id() == grade.get_course_id()) {
          course_credit = course.get_credits();
          break;
        }
      }
      credits_sum += course_credit;

      float number_grade;
      switch (grade.get_grade()) {
        case 'A':
          number_grade = 4.0;
          break;
        case 'B':
          number_grade= 3.0;
          break;
        case 'C':
          number_grade= 2.0;
          break;
        case 'D':
          number_grade= 1.0;
          break;
        case 'F':
          number_grade= 0.0;
          break;
      }
      points += number_grade * course_credit;
    }
  }
  GPA = points / credits_sum;

  std::string student_str;
  student_str = selected_student->get_name();
  std::cout << "The GPA for " << student_str << " is " << GPA << std::endl;

  std::cout << std::endl << std::endl;
  return 0;
}
