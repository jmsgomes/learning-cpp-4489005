// Learning C++
// Challenge 06_03
// Upgrade to work with files, by Eduardo Corpeño

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

#include "records.h"

void initialize(StudentRecords&);

int main() {
  int id;
  StudentRecords SR;

  initialize(SR);

  std::cout << "Enter a student ID: " << std::flush;
  std::cin >> id;

  SR.report_card(id);

  std::ofstream output_stream;
  output_stream.open("report.txt");
  SR.report_card(id, output_stream);
  output_stream.close();
  std::cout << std::endl << "Report card written to report.txt" << std::endl;

  std::cout << std::endl << std::endl;
  return 0;
}

void initialize(StudentRecords& srec) {
  std::ifstream input_file;
  std::string input_line;

  input_file.open("students.txt");
  while (!input_file.eof()) {
    std::string id_line;
    std::string name_line;

    getline(input_file, id_line);
    getline(input_file, name_line);
    if (id_line.empty()) break;
    if (name_line.empty()) break;

    srec.add_student(stoi(id_line), name_line);
  }
  input_file.close();

  input_file.open("courses.txt");
  while (!input_file.eof()) {
    std::string id_line;
    std::string name_line;
    std::string credits_line;

    getline(input_file, id_line);
    getline(input_file, name_line);
    getline(input_file, credits_line);
    if (id_line.empty()) break;
    if (name_line.empty()) break;
    if (credits_line.empty()) break;
    srec.add_course(stoi(id_line), name_line, stoi(credits_line));
  }
  input_file.close();

  input_file.open("grades.txt");
  while (!input_file.eof()) {
    std::string student_id_line;
    std::string course_id_line;
    std::string letter_grade_line;

    getline(input_file, student_id_line);
    getline(input_file, course_id_line);
    getline(input_file, letter_grade_line);
    if (student_id_line.empty()) break;
    if (course_id_line.empty()) break;
    if (letter_grade_line.empty()) break;

    srec.add_grade(stoi(student_id_line), stoi(course_id_line),
                   (unsigned char)letter_grade_line[0]);
  }
  input_file.close();
}
