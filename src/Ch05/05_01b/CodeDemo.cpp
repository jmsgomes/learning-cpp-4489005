// Learning C++
// Exercise 05_01
// Creating Functions, by Eduardo Corpeño

#include <iostream>
#include <vector>

#include "records.h"

void initialize(StudentRecords&);

int main() {
  StudentRecords student_records;
  initialize(student_records);

  int id;
  std::cout << "Enter a student ID: " << std::flush;
  std::cin >> id;

  std::string student_name = student_records.get_student_name(id);
  std::cout << "The GPA for " << student_name << " is "
            << student_records.get_GPA(id) << std::endl;

  std::cout << std::endl << std::endl;
  return 0;
}

void initialize(StudentRecords& student_records) {
  student_records.add_student(1, "George P. Burdell");
  student_records.add_student(2, "Nancy Rhodes");

  student_records.add_course(1, "Algebra", 5);
  student_records.add_course(2, "Physics", 4);
  student_records.add_course(3, "English", 3);
  student_records.add_course(4, "Economics", 4);

  student_records.add_grade(1, 1, 'B');
  student_records.add_grade(1, 2, 'A');
  student_records.add_grade(1, 3, 'C');
  student_records.add_grade(2, 1, 'A');
  student_records.add_grade(2, 2, 'A');
  student_records.add_grade(2, 4, 'B');
}
