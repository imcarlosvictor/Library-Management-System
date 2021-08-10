#include <iostream>
#include <vector>
#include "bookshop.h"

void ShowRecords()
{

}

void CheckAvailability()
{

}

void AddBook(std::vector<struct Book>& library_records)
{
  std::string title;
  std::string author;
  int year_published;
  int book_ID;
  
  // Title
  std::cout << "Title: ";
  std::getline(std::cin, title);
  // Author
  std::cout << "Author: ";
  std::getline(std::cin, author);
  // Publish year
  std::cout << "Year Pusblished: ";
  std::cin >> year_published;
  // ID
  std::cout << "Book ID: ";
  std::cin >> book_ID;

  // Create new object
  Book new_record = {title, author, year_published, book_ID};

  // Add to library records
  library_records.push_back(new_record);
}

void ModifyRecords()
{

}

void DeleteRecord()
{

}
