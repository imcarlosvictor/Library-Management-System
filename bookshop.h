#pragma once
#include <iostream>
#include <vector>

struct Book
{
  std::string title;
  std::string author;
  int year_published;
  int id;
};

void ShowRecords();
void CheckAvailability();
void AddBook(std::vector<struct Book>&);
void ModifyRecords();
void DeleteRecord();
