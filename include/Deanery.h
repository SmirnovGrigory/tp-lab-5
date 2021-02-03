// Copyright 2021 Smirnov Grigory
#ifndef INCLUDE_DEANERY_H_
#define INCLUDE_DEANERY_H_
#include <fstream>
#include "Group.h"

class Deanery {
 private:
  std::vector<Group*> groups;
  
 public:
  void initHeads();
  Deanery(std::vector<Group*> groups);
  void addRandomMarks(int n);
  Group* getGroup(std::string title);
  void academicPerformance();
  void moveStudent(Student* forMove, std::string oldGroup, std::string newGroup); //���� �������� �������� - ���� ������������ ���
  void fireBadStudents();
  void saveStaff(std::string fileName);
  void printInfo();
};
#endif  // INCLUDE_DEANERY_H_
