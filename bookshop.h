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
void CheckAvailability();
void AddBook(std::vector<struct Book>&);
void ModifyRecords();
void DeleteRecord();
