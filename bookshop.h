#pragma once
#include <iostream>
#include <vector>

struct Book
{
  std::string title;
  std::string author;
  // Option to store multiple genres
  std::vector<std::string> genre;
  int year_published;
  int id;
};

void ShowRecords(std::vector<struct Book>);
void AddBook(std::vector<struct Book>&);
void ModifyRecords(std::vector<struct Book>&);
void DeleteRecord(std::vector<struct Book>&);
